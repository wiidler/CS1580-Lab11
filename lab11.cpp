// Programmer: Will Weidler
// ID: wawq97
// Date: 4/26/22
// File: lab10.cpp
// Assignment: Lab 10
// Purpose: This program takes uses overloaded functions to output and add stats.

#include "magic.h"
#include <iostream>
using namespace std;

int main(){
    MagicSmasher<int> val1(420, 11);
    cout << val1.getSum() << endl;
    MagicSmasher<bool> val2(true, false);
    cout << val2.getSum() << endl;
    MagicSmasher<string> val3("SawsonPawson", "MichaelPichael");
    cout << val3.getSum();
    return 0;
}