//
// Created by nmack on 9/18/22.
//

#include "Piece.h"

using namespace std;

Piece::Piece(std::string piece, std::string file, std::string rank) :
    piece(piece),
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

string Piece::GetFile()
{
    return file;
}

void Piece::SetFile(std::string file)
{
    file = file;
}

string Piece::GetRank()
{
    return rank;
}

void Piece::SetRank(std::string rank)
{
    rank = rank;
}