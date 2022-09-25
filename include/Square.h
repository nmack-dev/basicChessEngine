//
// Created by nmack on 9/25/22.
//

#ifndef BASICCHESSENGINE_SQUARE_H
#define BASICCHESSENGINE_SQUARE_H

#include "Piece.h"

class Square
{
public:
    Square(Piece* piece = NULL);
    virtual ~Square();

    Piece* GetPiece();
    void SetPiece(Piece* piece);

private:
    Piece* piece;
};

#endif //BASICCHESSENGINE_SQUARE_H
