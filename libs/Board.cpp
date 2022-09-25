//
// Created by nmack on 9/25/22.
//

#include "Board.h"

void Board::GenerateBoard()
{
    for (int i = 0; i < numFileSquares; i++)
    {
        for (int j = 0; j < numRankSquares; j++)
        {
            board[i][j] = new Square();
        }
    }


}