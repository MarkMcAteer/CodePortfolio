# Makefile - palindrome.cpp
# Mark McAteer - 2023
# Makefile for the palindrome tester

CC = g++

all: main

# Testing

palindrome: palindrome.o
		$(CC) palindrome.o -o palindrome

main: main.o palindrome.o
		$(CC) palindrome.o main.o -o main

# Object Files

palindrome.o: palindrome.h
		$(CC) -c palindrome.cpp

main.o: palindrome.cpp main.cpp
		$(CC)  -c main.cpp


clean:
	rm -f *.o main
