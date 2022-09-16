#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
    unsigned int length;
    T *arr;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& copy);
    Array& operator=(const Array& ref);
    T getArrElement(unsigned int i) const;
    T operator[](int index) const;
    T& operator[](int index);
    ~Array();
    unsigned int size(void) const;
    class outRangeExecption : public std::exception
    {
    public:
        virtual ~outRangeExecption () throw();
        virtual const char* what() throw();
    };
};
#include "Array.tpp"
#endif