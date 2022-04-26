#include "MagicSmasher.h"

/*****************FUNCTION DEFINITIONS*****************/
// Constructors
template <class T>
MagicSmasher<T>::MagicSmasher(T val1, T val2){
    m_val1 = val1;
    m_val2 = val2;
    m_sum = (val1 + val2);
}
// Getter Functions
template <class T>
T MagicSmasher<T>::getSum(){
    return m_sum;
}