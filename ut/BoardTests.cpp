//
// Created by nmack on 9/21/22.
//

#include <string>
#include "gtest/gtest.h"
#include "Board.h"

class BoardTests : public ::testing::Test
{
protected:
    BoardTests() {}
    ~BoardTests() {}

    void SetUp() override
    {
        testBoard = new Board();
    }

    void TearDown() override
    {
        delete testBoard;
    }

    Board* testBoard;
};

TEST_F(BoardTests, TestIsLegalMove)
{
    // test for valid knight moves
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 7, 6));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 7, 4));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 6, 7));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 6, 3));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 4, 3));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 4, 7));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 3, 6));
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 5, 5, 3, 4));

    // test for invalid knight moves
    EXPECT_EQ(false, testBoard->IsLegalMove("knight", 5, 5, 7, 10));
    EXPECT_EQ(false, testBoard->IsLegalMove("knight", 2, 1, 7, -1));

// #####################################################################################################################

    // test for legal bishop moves
    EXPECT_EQ(true, testBoard->IsLegalMove("bishop", 3, 1, 6, 4));
    EXPECT_EQ(true, testBoard->IsLegalMove("bishop", 6, 4, 3, 1));

    // test for illegal bishop moves
    EXPECT_EQ(false, testBoard->IsLegalMove("bishop", 3, 1, 6, 6));

// #####################################################################################################################


}

TEST_F(BoardTests, TestMove)
{

}
