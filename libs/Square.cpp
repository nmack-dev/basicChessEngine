//
// Created by nmack on 9/25/22.
//

#include "Square.h"

Square::Square(Piece* piece) : piece(piece) {}

Square::~Square()
{
    delete piece;
}

Piece* Square::GetPiece()
{
    return piece;
}

void Square::SetPiece(Piece* piece)
{
    piece = piece;
}