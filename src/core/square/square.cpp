#include "square.h"

Square stringToSquare(const std::string& square) {
    // converts, via ASCII, std::cin 'move' and 'to' to their respective bit places.
    int file = square[0] - 'a';
    int rank = square[1] - '1';
    return static_cast<Square>((rank * 8) + file); // e4 = 28
}

/*
cases in which the selected piece cannot be move to the desired spot:
    - piece is occupied by another (i.e., the desired spot is = 1)
    - selected piece is not occupied (i.e., the selected bit is != 1, rather = 0)
    - if the previous two conditions are TRUE, we need a way to check if the current
    piece's desired spot is allowed to be made without violating the piece rules.
*/

bool isSquareOccupied(Square square) {
    // - selected square has not piece on it (i.e., the selected bit is != 1, rather = 0).
}

bool isTakeSquareOccupied(Square square) {
    // - piece is occupied by another (i.e., the desired spot is = 1).
}

bool isLegalMove(Piece piece, Square from, Square to) {
    // - if isSquareOccupied() && isTakeSquareOccupied() evaluate to TRUE, we need to check if it's a legal move by that piece.
}
bool canCapture() {
    // - if isLegalMove() evaluates, then we can can proceed with the move.
}
