#include "./board/bitboard.h"
#include "./board/board.h"
#include "./core/types/types.h"
#include "./input/command.h"

int main() {
    Board board;
    board.resetBoard();
    printBitboard(board.fullBoard);
}
