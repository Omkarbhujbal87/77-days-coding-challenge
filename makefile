# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Object files
OBJ = linkedlist.o main.o

# Executable name
TARGET = linkedlist_program

# Rule to build the executable
$(TARGET): linkedlist.o main.o
	$(CC) linkedlist.o main.o -o $(TARGET)

# Rule to compile linkedlist.c
linkedlist.o: linkedlist.c linkedlist.h
	$(CC) $(CFLAGS) -c linkedlist.c

# Rule to compile main.c
main.o: main.c linkedlist.h
	$(CC) $(CFLAGS) -c main.c

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(TARGET)
