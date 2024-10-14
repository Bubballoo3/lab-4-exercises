CXX = g++
CXXFLAGS = -Wall -std=c++11
# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = program_test

# Object files
OBJECTS = test.o

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

test.o: test.cpp ex3.cpp pt3.cpp pt4.cpp pt5.cpp pt6.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

# Clean up object files and executable
clean:
	rm -f $(OBJECTS) $(TARGET)
