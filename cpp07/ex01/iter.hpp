#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T>
void callElement(T array, unsigned int length)
{
	for (unsigned int i = 0; i < length; i++)
		std::cout << array[i] << std::endl;
}

template <typename T>
void iter(T arrayAdress, unsigned int length, void(*func)(T, unsigned int))
{
	func(arrayAdress, length);
}

#endif