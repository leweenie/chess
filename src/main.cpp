#include "./board/bitboard.h"
#include "./board/board.h"
#include "./core/square/square.h"
#include "./core/types/types.h"
#include "./input/command.h"

int main() {
    enum Square square;
    // way one
    square = static_cast<Square>(28);
    std::cout << square << "\n";
    // way two
    square = E4;
    std::cout << square << "\n";

    Board board;
    board.resetBoard();

    printBitboard(board.fullBoard);

    MoveCommand move;
    std::string line;
    std::cin >> line;

    parseMove(line, move);
}
