SRC_DIR = src
BUILD_DIR = build

TARGET = $(BUILD_DIR)/main

SOURCES = \
    $(SRC_DIR)/main.cpp \
    $(SRC_DIR)/board/board.cpp \
    $(SRC_DIR)/board/bitboard.cpp \
    $(SRC_DIR)/core/square/square.cpp \
    $(SRC_DIR)/input/command.cpp

OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -I$(SRC_DIR)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR)
