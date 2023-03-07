// Palindrome.cpp
// Mark McAteer - 2023
// Main file for testing the palindrome determinator

#include "palindrome.h"

string pals[8] = {"hannah", "dog", "noon", "rooster", "civic", "malayalam", "xyzabababazyx", "McAteer"};

int main() {

    for (int i = 0; i < 7; i++) {
        if (isPalindrome(pals[i])) {
            cout << pals[i] << " is a palindrome!" << endl;
        } else {
            cout << pals[i] << " is not a palindrome!" << endl;
        }
    }

    return 0;

}
