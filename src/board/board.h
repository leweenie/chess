#pragma once
#include "../core/square/square.h"
#include "../core/types/types.h"

struct Board {
    u64 whitePieces;

    u64 whitePawns;
    u64 whiteKnights;
    u64 whiteBishops;
    u64 whiteRooks;
    u64 whiteQueen;
    u64 whiteKing;

    u64 blackPieces;

    u64 blackPawns;
    u64 blackKnights;
    u64 blackBishops;
    u64 blackRooks;
    u64 blackQueen;
    u64 blackKing;

    u64 fullBoard;

    void resetBoard();
};
