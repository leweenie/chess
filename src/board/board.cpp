#include "board.h"

void Board::resetBoard() {
    /*
     0000 0000
     0000 0000
     0000 0000
     0000 0000
     0000 0000
     0000 0000
     0000 0000
     0000 0000
    */

    whitePawns   = 0x000000000000FF00ULL;
    whiteKnights = 0x0000000000000042ULL;
    whiteBishops = 0x0000000000000024ULL;
    whiteRooks   = 0x0000000000000081ULL;
    whiteQueen   = 0x0000000000000008ULL;
    whiteKing    = 0x0000000000000010ULL;

    blackPawns   = 0x00FF000000000000ULL;
    blackKnights = 0x4200000000000000ULL;
    blackBishops = 0x2400000000000000ULL;
    blackRooks   = 0x8100000000000000ULL;
    blackQueen   = 0x0800000000000000ULL;
    blackKing    = 0x1000000000000000ULL;

    whitePieces =
        whitePawns | whiteKnights | whiteBishops |
        whiteRooks | whiteQueen | whiteKing;

    blackPieces =
        blackPawns | blackKnights | blackBishops |
        blackRooks | blackQueen | blackKing;

    fullBoard = whitePieces | blackPieces;
}
