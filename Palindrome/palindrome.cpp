// Palindrome.cpp
// Mark McAteer - 2023
// Source file for the palindrome tester

#include "palindrome.h"

#include <iostream>
using namespace std;

bool isPalindrome(string palindrome) {

    string reverse;

    // If the palindrome string is empty it's not a word return false.
    if (palindrome.size() <= 0) {
        return false;
    }

    // Loop through the palindrome string and insert each character in reverse
    // order into the reverse string
    for (int i = 0; i < palindrome.size(); i++) {
        reverse.insert(0, 1, palindrome[i]);
    }

    // Compare the reverse and unreversed palindrome string and determine if
    // they are the same
    if ( palindrome.compare(reverse) == 0 ) {
        return true;
    }else{
        return false;
    }

}
