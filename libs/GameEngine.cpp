//
// Created by nmack on 9/18/22.
//

#include "GameEngine.h"

#include <stdexcept>

using namespace std;

GameEngine::GameEngine()
{
    // Initial board position for white pieces
    boardPieces.push_back(new Piece("rook", 0, 1, 1));
    boardPieces.push_back(new Piece("knight", 1, 2, 1));
    boardPieces.push_back(new Piece("bishop", 2, 3, 1));
    boardPieces.push_back(new Piece("queen", 3, 4, 1));
    boardPieces.push_back(new Piece("king", 4, 5, 1));
    boardPieces.push_back(new Piece("bishop", 5, 6, 1));
    boardPieces.push_back(new Piece("knight", 6, 7, 1));
    boardPieces.push_back(new Piece("rook", 7, 8, 1));

    // Initial position for white pawns
    boardPieces.push_back(new Piece("pawn", 8, 1, 2));
    boardPieces.push_back(new Piece("pawn", 9, 2, 2));
    boardPieces.push_back(new Piece("pawn", 10, 3, 2));
    boardPieces.push_back(new Piece("pawn", 11, 4, 2));
    boardPieces.push_back(new Piece("pawn", 12, 5, 2));
    boardPieces.push_back(new Piece("pawn", 13, 6, 2));
    boardPieces.push_back(new Piece("pawn", 14, 7, 2));
    boardPieces.push_back(new Piece("pawn", 15, 8, 2));

    // Initial position for black pieces
    boardPieces.push_back(new Piece("rook", 16, 1, 8));
    boardPieces.push_back(new Piece("knight", 17, 2, 8));
    boardPieces.push_back(new Piece("bishop", 18, 3, 8));
    boardPieces.push_back(new Piece("queen", 19, 4, 8));
    boardPieces.push_back(new Piece("king", 20, 5, 8));
    boardPieces.push_back(new Piece("bishop", 21, 6, 8));
    boardPieces.push_back(new Piece("knight", 22, 7, 8));
    boardPieces.push_back(new Piece("rook", 23, 8, 8));

    // Initial position for black pawns
    boardPieces.push_back(new Piece("pawn", 24, 1, 7));
    boardPieces.push_back(new Piece("pawn", 25, 2, 7));
    boardPieces.push_back(new Piece("pawn", 26, 3, 7));
    boardPieces.push_back(new Piece("pawn", 27, 4, 7));
    boardPieces.push_back(new Piece("pawn", 28, 5, 7));
    boardPieces.push_back(new Piece("pawn", 29, 6, 7));
    boardPieces.push_back(new Piece("pawn", 30, 7, 7));
    boardPieces.push_back(new Piece("pawn", 31, 8, 7));

    // Initialize piece location cache
    pieceCache.emplace_back(8, true);
    pieceCache.emplace_back(8, true);
    pieceCache.emplace_back(8, false);
    pieceCache.emplace_back(8, false);
    pieceCache.emplace_back(8, false);
    pieceCache.emplace_back(8, false);
    pieceCache.emplace_back(8, true);
    pieceCache.emplace_back(8, true);
}

GameEngine::~GameEngine()
{
    for (auto piece : boardPieces)
    {
        delete piece;
    }
}

bool GameEngine::isSquareTaken(int file, int rank)
{
    // TODO: implement
    return false;
}

void GameEngine::updateCache(int startFile, int startRank, int endFile, int endRank)
{
    // TODO: implement
}

bool GameEngine::knightValidator(int startFile, int startRank, int endFile, int endRank)
{
    if ((1 == (endFile - startFile)) && (2 == (endRank - startRank))) {
        return true;
    } else if ((1 == (endFile - startFile)) && (-2 == (endRank - startRank))) {
        return true;
    } else if ((2 == (endFile - startFile)) && (1 == (endRank - startRank))) {
        return true;
    } else if ((2 == (endFile - startFile)) && (-1 == (endRank - startRank))) {
        return true;
    } else if ((-1 == (endFile - startFile)) && (2 == (endRank - startRank))) {
        return true;
    } else if ((-1 == (endFile - startFile)) && (-2 == (endRank - startRank))) {
        return true;
    } else if ((-2 == (endFile - startFile)) && (1 == (endRank - startRank))) {
        return true;
    } else if ((-2 == (endFile - startFile)) && (-1 == (endRank - startRank))) {
        return true;
    } else {
        return false;
    }
}

bool GameEngine::bishopValidator(int startFile, int startRank, int endFile, int endRank)
{
    int bishopMoveSlope = (endFile - startFile) / (endRank - startRank);

    if (1 == bishopMoveSlope || -1 == bishopMoveSlope) {
        return true;
    } else {
        return false;
    }
}

bool GameEngine::rookValidator(int startFile, int startRank, int endFile, int endRank)
{
    if (endFile == startFile && endRank != startRank) {
        return true;
    } else if (endFile != startFile && endRank == startRank) {
        return true;
    } else {
        return false;
    }
}

bool GameEngine::queenValidator(int startFile, int startRank, int endFile, int endRank)
{
    if (true == bishopValidator(startFile, startRank, endFile, endRank) ||
        true == rookValidator(startFile, startRank, endFile, endRank)) {
        return true;
    } else {
        return false;
    }
}

bool GameEngine::IsLegalMove(std::string pieceType, int startFile, int startRank, int endFile, int endRank)
{
    // TODO: implement me...
    // TODO: UT me...
    // TODO: move this conditional to ::Move(...)
    if (0 < endFile && 0 < endRank && 9 > endFile && 9 > endRank) {
        if (false == isSquareTaken(endFile, endRank)) {
            if (0 == pieceType.compare("pawn")) {
                return false;
            } else if (0 == pieceType.compare("knight")) {
                return knightValidator(startFile, startRank, endFile, endRank);
            } else if (0 == pieceType.compare("bishop")) {
                return bishopValidator(startFile, startRank, endFile, endRank);
            } else if (0 == pieceType.compare("rook")) {
                return rookValidator(startFile, startRank, endFile, endRank);
            } else if (0 == pieceType.compare("queen")) {
                return queenValidator(startFile, startRank, endFile, endRank);
            } else if (0 == pieceType.compare("king")) {
                return false;
            } else {
                throw invalid_argument("received invalid piece string");
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool GameEngine::Move(int startFile, int startRank, int endFile, int endRank)
{
    // TODO: write a UT for me...
    Piece* movePiece;

    for (auto piece : boardPieces)
    {
        if (startFile == piece->GetFile() && startRank == piece->GetRank()) {
            movePiece = piece;
        }
    }

    if (nullptr != movePiece && true == IsLegalMove(movePiece->GetPiece(), startFile,
                                                    startRank, endFile, endRank)) {
        movePiece->SetFile(endFile);
        movePiece->SetRank(endRank);
        return true;
    } else {
        return false;
    }
}