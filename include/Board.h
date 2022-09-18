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

private:
    std::vector<Piece*> boardPieces;
};

#endif //BASICCHESSENGINE_BOARD_H
