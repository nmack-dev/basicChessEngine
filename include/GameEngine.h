//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_GAMEENGINE_H
#define BASICCHESSENGINE_GAMEENGINE_H

#include <string>
#include <vector>
#include <boost/graph/adjacency_list.hpp>

#include "Piece.h"
#include "Board.h"

class GameEngine
{
public:
    GameEngine();
    virtual ~GameEngine();

    bool IsLegalMove(std::string pieceType, int startFile, int startRank, int endFile, int endRank);
    bool Move(int startFile, int startRank, int endFile, int endRank);

private:
    std::vector<Piece*> boardPieces;
    std::vector<std::vector<bool>> pieceCache;

    bool isSquareTaken(int file, int rank);
    void updateCache(int startFile, int startRank, int endFile, int endRank);

    bool pawnValidator(int startFile, int startRank, int endFile, int endRank);
    bool knightValidator(int startFile, int startRank, int endFile, int endRank);
    bool bishopValidator(int startFile, int startRank, int endFile, int endRank);
    bool rookValidator(int startFile, int startRank, int endFile, int endRank);
    bool queenValidator(int startFile, int startRank, int endFile, int endRank);
    bool kingValidator(int startFile, int startRank, int endFile, int endRank);
};

#endif //BASICCHESSENGINE_GAMEENGINE_H
