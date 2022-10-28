//
// Created by nmack on 9/18/22.
//

#include "Piece.h"

using namespace std;

Piece::Piece(string piece, string color, int id) :
    piece(piece),
    id(id)
{}

string Piece::GetPiece()
{
    return piece;
}

void Piece::SetPiece(std::string piece)
{
    piece = piece;
}

string Piece::GetColor()
{
    return color;
}

int Piece::GetId()
{
    return id;
}