//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_PIECE_H
#define BASICCHESSENGINE_PIECE_H

#include <string>

class Piece
{
public:
    Piece(std::string piece, std::string color, int id);
    virtual ~Piece() {}

    std::string GetPiece();
    void SetPiece(std::string piece);

    std::string GetColor();
    int GetId();

private:
    std::string piece;
    std::string color;
    int id;
};

#endif //BASICCHESSENGINE_PIECE_H
