CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = -lm

SRC_DIR = src
TEST_DIR = tests

.PHONY: all test test_suma test_lista test_punto clean

all: test

test: test_suma test_lista test_punto

test_suma:
	$(CC) $(CFLAGS) -o test_suma $(TEST_DIR)/test_suma.c $(SRC_DIR)/suma.c 
	./test_suma

test_lista:
	$(CC) $(CFLAGS) -o test_lista $(TEST_DIR)/test_lista.c $(SRC_DIR)/lista.c
	./test_lista

test_punto:
	$(CC) $(CFLAGS) -o test_punto $(TEST_DIR)/test_punto.c $(SRC_DIR)/punto.c $(LDFLAGS)
	./test_punto

clean:
	rm -f test_suma test_lista test_punto
