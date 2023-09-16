CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/
SRC=src/

all: 
	$(CC) $(CFLAGS) $(SRC)main.c -o $(BUILD)password
clang:
	clang-format -i $(SRC)main.c
valgrind:
	valgrind --leak-check=yes $(BUILD)/password 6