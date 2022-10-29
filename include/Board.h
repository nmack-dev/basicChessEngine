////
//// Created by nmack on 9/25/22.
////
//
//#ifndef BASICCHESSENGINE_BOARD_H
//#define BASICCHESSENGINE_BOARD_H
//
//#include "Piece.h"
//
//class Board
//{
//public:
//    Board() {}
//    virtual ~Board();
//
//    void GenerateBoard();
//
//    Piece* GetPiece(int file, int rank);
//    Piece* GetLastMovedPiece();
//
//    void MovePiece(int startFile, int startRank, int endFile, int endRank);
//
//private:
//    static const int numFileSquares = 8;
//    static const int numRankSquares = 8;
//
//    Piece* board[numFileSquares][numRankSquares];
//
//    int moveCount = 0;
//    Piece* lastMovedPiece = NULL;
//
//};
//
//#endif //BASICCHESSENGINE_BOARD_H
