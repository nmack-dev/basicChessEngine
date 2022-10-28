//
// Created by nmack on 9/18/22.
//

#include <stdexcept>

#include "GameEngine.h"

using namespace std;

GameEngine::GameEngine(Board* board) : board(board)
{
    board->GenerateBoard();
}

GameEngine::~GameEngine()
{
    delete board;
}

bool GameEngine::isSquareTaken(int file, int rank)
{
    if (NULL == board->GetPiece(file, rank)) {
        return false;
    } else {
        return true;
    }
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
    Piece* movePiece = board->GetPiece(startFile, startRank);

    if (NULL != movePiece) {
        if (true == IsLegalMove(movePiece->GetPiece(), startFile, startRank, endFile, endRank)) {
            board->MovePiece(startFile, startRank, endFile, endRank);
        }
    }
}