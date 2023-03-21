// mortgage.cpp
// Mark McAteer 2023
// A simple calculator that will determine the cost of a mortgage on a home.

// The equation for mortgage calculation is M = P [ i(1 + i)^n ] / [ (1 + i)^n – 1].
//
// M = Total monthly payment
// P = The total amount of your loan
// I = Your interest rate, as a monthly percentage
// N = The total amount of months in your timeline for paying off your mortgage

#include "mortgage.h"

#include <cmath>
#include <iostream>
using namespace std;

string calculateTimeString(int months) {

    string time;

    // Get i modulus 12 to determine if the number can be divided equally to months.
    int i = months % 12;

    // If the number can be divded equally to months, just divide by 12, otherwise
    // subtract the remainder from the total months so it can be divded evenly to years.
    if (i == 0) {
        time = to_string(months/12) + " years.";
    } else {
        time = to_string((months-i)/12) + " years and " + to_string(i) + " months.";
    }

    return time;
}

double calculateMortgage(double total_loan, double monthly_interest, int months) {

    // Multiply the interest by 0.01 to obtain the numerical version of the percentage.
    double true_interest = monthly_interest * 0.01;

    // Divide the monthly interest by 12 to get monthy interest.
    double monthy_interest = (double)true_interest / (double)12;

    // Set numerator equal to:    i(1 + i)^n
    double numerator = monthy_interest * (pow((1 + monthy_interest), months));

    // Set denominator equal to: [ (1 + i)^n – 1]
    double denominator = (pow((1 + monthy_interest), months)) - 1;

    // Divide the numerator by the denominator to get the quotient.
    double quotient = numerator / denominator;

    // Multiply the total amount of the loan by the quotient of the calculation.
    return total_loan * quotient;
}
