cmake_minimum_required(VERSION 3.23)
project(basicChessEngine)

set(CMAKE_CXX_STANDARD 14)

FIND_PACKAGE( Boost 1.40 COMPONENTS program_options REQUIRED )

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
        libs/Board.cpp
        )

add_library(basicChessEngine_lib ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(basicChessEngine_lib
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIR}
)

# Add an executable with the above sources
add_executable(basicChessEngine src/main.cpp)

target_link_libraries(basicChessEngine basicChessEngine_lib ${Boost_LIBRARIES})

# Unit Testing
########################################################################################################################
include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(UNITTESTS
        ut/BoardTests.cpp)

add_executable(basicChessEngine_ut ${UNITTESTS})
target_link_libraries(basicChessEngine_ut gtest_main basicChessEngine_lib)

target_include_directories(basicChessEngine_ut
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        )

add_test(test_all basicChessEngine_ut)

