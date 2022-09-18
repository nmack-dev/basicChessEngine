//
// Created by nmack on 9/18/22.
//

#include "Board.h"

Board::Board()
{
    // Initial board position for white pieces
    boardPieces.push_back(new Piece("rook", 0, 1, 1));
    boardPieces.push_back(new Piece("knight", 1, 2, 1));
    boardPieces.push_back(new Piece("bishop", 2, 3, 1));
    boardPieces.push_back(new Piece("queen", 3, 4, 1));
    boardPieces.push_back(new Piece("king", 4, 5, 1));
    boardPieces.push_back(new Piece("bishop", 5, 6, 1));
    boardPieces.push_back(new Piece("knight", 6, 7, 1));
    boardPieces.push_back(new Piece("rook", 7, 8, 1));

    // Initial position for white pawns
    boardPieces.push_back(new Piece("pawn", 8, 1, 2));
    boardPieces.push_back(new Piece("pawn", 9, 2, 2));
    boardPieces.push_back(new Piece("pawn", 10, 3, 2));
    boardPieces.push_back(new Piece("pawn", 11, 4, 2));
    boardPieces.push_back(new Piece("pawn", 12, 5, 2));
    boardPieces.push_back(new Piece("pawn", 13, 6, 2));
    boardPieces.push_back(new Piece("pawn", 14, 7, 2));
    boardPieces.push_back(new Piece("pawn", 15, 8, 2));

    // Initial position for black pieces
    boardPieces.push_back(new Piece("rook", 16, 1, 8));
    boardPieces.push_back(new Piece("knight", 17, 2, 8));
    boardPieces.push_back(new Piece("bishop", 18, 3, 8));
    boardPieces.push_back(new Piece("queen", 19, 4, 8));
    boardPieces.push_back(new Piece("king", 20, 5, 8));
    boardPieces.push_back(new Piece("bishop", 21, 6, 8));
    boardPieces.push_back(new Piece("knight", 22, 7, 8));
    boardPieces.push_back(new Piece("rook", 23, 8, 8));

    // Initial position for black pawns
    boardPieces.push_back(new Piece("pawn", 24, 1, 7));
    boardPieces.push_back(new Piece("pawn", 25, 2, 7));
    boardPieces.push_back(new Piece("pawn", 26, 3, 7));
    boardPieces.push_back(new Piece("pawn", 27, 4, 7));
    boardPieces.push_back(new Piece("pawn", 28, 5, 7));
    boardPieces.push_back(new Piece("pawn", 29, 6, 7));
    boardPieces.push_back(new Piece("pawn", 30, 7, 7));
    boardPieces.push_back(new Piece("pawn", 31, 8, 7));
}