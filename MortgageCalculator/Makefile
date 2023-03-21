# Makefile - mortgage.cpp
# Mark McAteer - 2023
# Makefile for the mortgage mortgage calculator

CC = g++

all: calculate

# Testing

mortgage: mortgage.o
		$(CC) mortgage.o -o mortgage

main: main.o mortgage.o
		$(CC) mortgage.o main.o -o main

# Object Files

mortgage.o: mortgage.h
		$(CC) -c mortgage.cpp

main.o: mortgage.cpp main.cpp
		$(CC)  -c main.cpp


clean:
	rm -f *.o main
