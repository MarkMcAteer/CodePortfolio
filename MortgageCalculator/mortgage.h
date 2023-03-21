// mortgage.cpp
// Mark McAteer 2023
// The header file for mortgage mortgage calculator

#include <cmath>
#include <iostream>
using namespace std;

// Function that will calculate the monthly mortage cost given the total loan cost,
// the monthly interest, and the total months provided by the bank.
double calculateMortgage(double total_loan, double monthly_interest, int months);

// A function to calculate the amount of time in years and months given the total
// amount of months that have been provided by the bank.
string calculateTimeString(int months);
