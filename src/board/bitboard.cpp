#include "bitboard.h"

void printBitboard(u64 bb) {
    std::cout << "\n";

    for (int rank = 7; rank >= 0; --rank) {
        std::cout << (rank + 1) << "  ";

        for (int file = 0; file < 8; ++file) {
            int square = rank * 8 + file;
            std::cout << ((bb >> square) & 1ULL) << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n   a b c d e f g h\n\n";
}
