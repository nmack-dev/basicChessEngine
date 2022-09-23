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
    // knight test moves
    EXPECT_EQ(true, testBoard->IsLegalMove("knight", 2, 1, 3, 3));
    EXPECT_EQ(false, testBoard->IsLegalMove("knight", 2, 1, 5, 3));
}

TEST_F(BoardTests, TestMove)
{

}
