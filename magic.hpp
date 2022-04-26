/*****************FUNCTION DEFINITIONS*****************/
// Constructors
template <class T>
MagicSmasher<T>::MagicSmasher(T val1, T val2){
    m_val1 = val1;
    m_val2 = val2;
}
// Getter Functions
template <class T>
T MagicSmasher<T>::getSum(){
    T sum = (m_val1 + m_val2);
    return sum;
}