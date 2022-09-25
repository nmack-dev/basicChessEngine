//
// Created by nmack on 9/25/22.
//

#ifndef BASICCHESSENGINE_BOARD_H
#define BASICCHESSENGINE_BOARD_H

#include "Square.h"

class Board
{
public:
    Board() {};
    virtual ~Board() {};

    void GenerateBoard();

private:
    static const int numFileSquares = 8;
    static const int numRankSquares = 8;
    Square* board[numFileSquares][numRankSquares];

    void populatePawns(Square* rank);
    void populatePieces(Square* rank);
};

#endif //BASICCHESSENGINE_BOARD_H
