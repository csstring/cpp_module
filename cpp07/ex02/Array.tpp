//#include "Array.hpp"
#include <typeinfo>
template <typename T>
Array<T>::Array() : length(0)
{
    arr = new T[length];
}

template <typename T>
Array<T>::Array(unsigned int n) : length(n)
{
    arr = new T[length];
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : length(copy.size())
{
    arr = new T [length];
    for (unsigned int i = 0; i < length; i++)
        arr[i] = copy.getArrElement(i);
}
template <typename T>
T Array<T>::getArrElement(unsigned int i) const
{
    return (arr[i]);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& ref)
{
    delete []this->arr;
    arr = new T[ref.size()];
    length = ref.size();
    for (unsigned int i = 0; i < length; i++)
        arr[i] = ref.getArrElement(i);
    return (*this);
}

template <typename T>
T Array<T>::operator[](int index) const
{
    if (index < 0 || static_cast<unsigned int>(index) >= length)
        throw std::bad_cast();
//        throw Array<T>::outRangeExecption();
    return (arr[index]);
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if (index < 0 || static_cast<unsigned int>(index) >= length)
            throw std::bad_cast();
//        throw Array<T>::outRangeExecption();
    return (arr[index]);
}

template <typename T>
Array<T>::~Array()
{
    delete []arr;
}
template <typename T>
unsigned int Array<T>::size(void) const
{
    return (length);
}