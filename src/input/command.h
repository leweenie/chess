#pragma once
#include "../core/square/square.h"
#include <string>

struct MoveCommand {
    Square from;
    Square to;
};

bool parseMove(const std::string& line, MoveCommand& out);
