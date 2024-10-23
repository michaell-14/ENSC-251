#pragma once
#include <iostream>
using namespace std;

class Pairs
{
public:
    Pairs();
    Pairs(int first, int second);
    //other members and friends
    friend istream& operator >>(istream& ins, Pairs& second);
    friend ostream& operator <<(ostream& outs, const Pairs& second);
    friend Pairs operator +(const Pairs& first, const Pairs& second);
    friend Pairs operator -(const Pairs& first, const Pairs& second);
    friend Pairs operator *(const Pairs& first, const Pairs& second);
private:
    int firstNumber;
    int secondNumber;
};
