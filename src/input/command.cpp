#include "command.h"
#include <iostream>
#include <sstream>

bool parseMove(const std::string& line, MoveCommand& out) {
    // initial string partitioning
    std::cout << "moving..." << "\n";
    std::string cmd, from, toWord, to;
    std::stringstream ss(line);

    ss >> cmd >> from >> toWord >> to;
}
