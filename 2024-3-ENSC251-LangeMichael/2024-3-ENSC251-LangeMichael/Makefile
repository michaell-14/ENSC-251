#set to c++ 20 and add error flags
CPPFLAGS := -std=gnu++20 -pedantic-errors -Wall -Wextra -Werror 
COMPILER := g++

# Name the executable
TARGET = packageTest

# Find all .cpp files and corresponding .o files
SRCS := $(wildcard *.cpp) #find all .cpp files; wildcard is a function that finds all files with a certain folder
OBJS := $(SRCS:.cpp=.o) #replace .cpp with .o; object files are the compiled files

# Build the executable
TARGET: $(OBJS)
	$(COMPILER) -o $(TARGET) $(OBJS)

# Compile .o files from .cpp files
%.o: %.cpp
	$(COMPILER) -c $(CPPFLAGS) $< -o $@

# Clean up the directory
clean:
	rm -f *.o $(TARGET)

# make and run the program in one command
run: #name of the target; run is the name of the target
	make clean
	make 
	./$(TARGET)
