#include "pairs.h"

using namespace std;

// Default constructor
Pairs::Pairs() : firstNumber(0), secondNumber(0) {}

// Parameterized constructor
Pairs::Pairs(int first, int second) : firstNumber(first), secondNumber(second) {}

// Friend functions

// Input operator (>>) with format validation
istream& operator>>(istream& ins, Pairs& second) {
    char ch1, ch2, ch3;
    ins >> ch1 >> second.firstNumber >> ch2 >> second.secondNumber >> ch3;

    // Validate the input format (e.g., (a, b))
    if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
        ins.setstate(ios::failbit);  // Set stream state to fail
    }

    return ins;
}

// Output operator (<<)
ostream& operator<<(ostream& outs, const Pairs& second) {
    outs << "(" << second.firstNumber << ", " << second.secondNumber << ")";
    return outs;
}

// Addition operator
Pairs operator+(const Pairs& first, const Pairs& second) {
    return Pairs(first.firstNumber + second.firstNumber, first.secondNumber + second.secondNumber);
}

// Subtraction operator
Pairs operator-(const Pairs& first, const Pairs& second) {
    return Pairs(first.firstNumber - second.firstNumber, first.secondNumber - second.secondNumber);
}

// Multiplication operator
Pairs operator*(const Pairs& first, const Pairs& second) {
    return Pairs(first.firstNumber * second.firstNumber, first.secondNumber * second.secondNumber);
}
