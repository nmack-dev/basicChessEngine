//
// Created by nmack on 9/18/22.
//

#include "Piece.h"

using namespace std;

Piece::Piece(std::string piece, int id, int file, int rank) :
    piece(piece),
    id(id),
    file(file),
    rank(rank)
{}

string Piece::GetPiece()
{
    return piece;
}

void Piece::SetPiece(std::string piece)
{
    piece = piece;
}

int Piece::GetId()
{
    return id;
}

int Piece::GetFile()
{
    return file;
}

void Piece::SetFile(int file)
{
    file = file;
}

int Piece::GetRank()
{
    return rank;
}

void Piece::SetRank(int rank)
{
    rank = rank;
}