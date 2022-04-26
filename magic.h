#ifndef MAGIC_H
#define MAGIC_H

#include <iostream>
using namespace std;

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
        T m_sum;
};

#endif