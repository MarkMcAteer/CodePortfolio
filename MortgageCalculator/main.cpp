// main.cpp
// Mark McAteer 2023
// Main file simple calculator that will determine the cost of a mortgage on a home.

#include "mortgage.h"

int main(int argc, char *argv[]) {

    double p;
    double i;
    double n;
    int m;

    cout << "Enter your total loan amount: ";
    cin >> p;

    cout << "Enter your monthy interest rate: ";
    cin >> i;

    cout << "Enter the number of months given by the bank to pay your loan: ";
    cin >> n;

    m = calculateMortgage(p, i, n);

    cout << "You will need to pay the bank " << m << "$ per month for " << calculateTimeString(n) << endl;

}
