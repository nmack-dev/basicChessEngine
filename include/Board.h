//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_BOARD_H
#define BASICCHESSENGINE_BOARD_H

#include <string>
#include <vector>

#include "Piece.h"

class Board
{
public:
    Board();
    virtual ~Board();

    bool Move(int startFile, int startRank, int endFile, int endRank);

private:
    bool checkLegalMove(std::string pieceType, int startFile, int startRank, int endFile, int endRank);
    std::vector<Piece*> boardPieces;
};

#endif //BASICCHESSENGINE_BOARD_H
