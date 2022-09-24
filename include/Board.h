//
// Created by nmack on 9/18/22.
//

#ifndef BASICCHESSENGINE_BOARD_H
#define BASICCHESSENGINE_BOARD_H

#include <string>
#include <vector>
#include <boost/graph/adjacency_list.hpp>

#include "Piece.h"
+
class Board
{
public:
    Board();
    virtual ~Board();

    bool IsLegalMove(std::string pieceType, int startFile, int startRank, int endFile, int endRank);
    bool Move(int startFile, int startRank, int endFile, int endRank);

private:
    boost::adjacency_list<>
            create_empty_directed_graph() noexcept {
        return {};
    }

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

#endif //BASICCHESSENGINE_BOARD_H
