cmake_minimum_required(VERSION 3.23)
project(basicChessEngine)

set(CMAKE_CXX_STANDARD 14)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
        src/main.cpp
        src/Piece.cpp
        )

# Add an executable with the above sources
add_executable(basicChessEngine ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(basicChessEngine
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
