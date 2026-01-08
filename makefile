CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++20
LDLIBS   = -lSDL3 

SRCS   = window.cpp
OBJS   = $(SRCS:.cpp=.o)
TARGET = window

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDLIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean
