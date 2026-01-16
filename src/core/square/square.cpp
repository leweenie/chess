#include "square.h"

Square stringToSquare(const std::string& square) {
    int file = square[0] - 'a';
    int rank = square[1] - '1';
    return static_cast<Square>(rank * 8 + file);
}

bool isValidSquare(const std::string& square) {
    return square.size() == 2 &&
           square[0] >= 'a' && square[0] <= 'h' &&
           square[1] >= '1' && square[1] <= '8';
}
