CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17
LDLIBS   = -lSDL3

BUILDDIR = build
SRCS     = window.cpp
OBJS     = $(SRCS:%.cpp=$(BUILDDIR)/%.o)
TARGET   = window

all: $(BUILDDIR)/$(TARGET)

$(BUILDDIR)/$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDLIBS)

$(BUILDDIR)/%.o: %.cpp
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: all
	./$(BUILDDIR)/$(TARGET)

clean:
	rm -rf $(BUILDDIR)

.PHONY: all run clean
