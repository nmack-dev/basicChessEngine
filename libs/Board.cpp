//
// Created by nmack on 9/25/22.
//

#include "Board.h"

Board::~Board()
{
    for (int i = 0; i < numFileSquares; i++)
    {
        for (int j = 0; i < numRankSquares; j++)
        {
            if (NULL == board[i][j])
            delete board[i][j];
        }
    }
}

void Board::GenerateBoard()
{
    // White piece generation
    board[0][0] = new Piece("rook", "white", 0);
    board[0][1] = new Piece("knight", "white", 1);
    board[0][2] = new Piece("bishop", "white", 2);
    board[0][3] = new Piece("queen", "white", 3);
    board[0][4] = new Piece("king", "white", 4);
    board[0][5] = new Piece("bishop", "white", 5);
    board[0][6] = new Piece("knight", "white", 6);
    board[0][7] = new Piece("rook", "white", 7);

    board[1][0] = new Piece("pawn", "white", 8);
    board[1][1] = new Piece("pawn", "white", 9);
    board[1][2] = new Piece("pawn", "white", 10);
    board[1][3] = new Piece("pawn", "white", 11);
    board[1][4] = new Piece("pawn", "white", 12);
    board[1][5] = new Piece("pawn", "white", 13);
    board[1][6] = new Piece("pawn", "white", 14);
    board[1][7] = new Piece("pawn", "white", 15);

    // Black piece generation
    board[7][0] = new Piece("rook", "black", 16);
    board[7][1] = new Piece("knight", "black", 17);
    board[7][2] = new Piece("bishop", "black", 18);
    board[7][3] = new Piece("queen", "black", 19);
    board[7][4] = new Piece("king", "black", 20);
    board[7][5] = new Piece("bishop", "black", 21);
    board[7][6] = new Piece("knight", "black", 22);
    board[7][7] = new Piece("rook", "black", 23);

    board[6][0] = new Piece("pawn", "black", 24);
    board[6][1] = new Piece("pawn", "black", 25);
    board[6][2] = new Piece("pawn", "black", 26);
    board[6][3] = new Piece("pawn", "black", 27);
    board[6][4] = new Piece("pawn", "black", 28);
    board[6][5] = new Piece("pawn", "black", 29);
    board[6][6] = new Piece("pawn", "black", 30);
    board[6][7] = new Piece("pawn", "black", 31);
}

Piece* Board::GetPiece(int file, int rank)
{
    return board[file - 1][rank - 1];
}

void Board::MovePiece(int startFile, int startRank, int endFile, int endRank)
{
    board[endFile - 1][endRank - 1] = board[startFile - 1][startRank - 1];
    board[startFile - 1][startRank - 1] = NULL;
}