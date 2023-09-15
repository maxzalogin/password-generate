CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/
SRC=src/

all: 
	$(CC) $(CFLAGS) $(SRC)main.c -o $(BUILD)password
			

