//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_PIECE_H
#define BASICCHESSENGINE_PIECE_H

#include <string>

class Piece
{
public:
    Piece(std::string piece, std::string file, std::string rank);
    virtual ~Piece() {}

    std::string GetPiece();
    void SetPiece(std::string piece);

    std::string GetFile();
    void SetFile(std::string file);

    std::string GetRank();
    void SetRank(std::string rank);

private:
    std::string piece;
    std::string file;
    std::string rank;
};

#endif //BASICCHESSENGINE_PIECE_H
