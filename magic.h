#ifndef MAGIC_H
#define MAGIC_H

#include <iostream>
using namespace std;

/**************FUNCTION NOTATION**************/
// Function: MagicSmasher(T val1, T val2);
// Description: A constructor that assigns m_val1 to val1 and m_val2 to val2
// Pre: Two values of the same type
// Post: A fully initialized MagicSmasher

// Function: T getSum();
// Description: Returns the sum of the two values
// Pre: An initialized MagicSmasher
// Post: Returns a value of type T corresponding to the sum of the two values

/**************CLASS DEFINITION**************/
template <class T>
class MagicSmasher{
    public:
        // Constructors
        MagicSmasher(T val1, T val2);
        // Getter Functions
        T getSum();
    private:
        T m_val1;
        T m_val2;
};

#include "magic.hpp"
#endif