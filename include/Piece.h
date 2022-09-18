//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_PIECE_H
#define BASICCHESSENGINE_PIECE_H

#include <string>

class Piece
{
public:
    Piece(std::string piece, int id, int file, int rank);
    virtual ~Piece() {}

    std::string GetPiece();
    void SetPiece(std::string piece);

    int GetId();

    int GetFile();
    void SetFile(int file);

    int GetRank();
    void SetRank(int rank);

private:
    std::string piece;
    int id;
    int file;
    int rank;
};

#endif //BASICCHESSENGINE_PIECE_H
