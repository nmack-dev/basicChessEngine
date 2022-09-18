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

    bool CheckLegalMove(std::string pieceType, int startFile, int startRank, int endFile, int endRank);
    bool Move(int startFile, int startRank, int endFile, int endRank);

private:
    std::vector<Piece*> boardPieces;
    std::vector<std::vector<bool>> pieceCache;
};

#endif //BASICCHESSENGINE_BOARD_H
