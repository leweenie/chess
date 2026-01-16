#include "command.h"
#include <iostream>
#include <sstream>

bool parseMove(const std::string& line, MoveCommand& out) {
    std::cout << "move .. to .." << "\n";
    std::string cmd, from, toWord, to;
    std::stringstream ss(line);

    ss >> cmd >> from >> toWord >> to;

    if (cmd != "move" || toWord != "to")
        return false;
    if (!isValidSquare(from) || !isValidSquare(to))
        return false;

    out.from = stringToSquare(from);
    out.to = stringToSquare(to);
    return true;
}
