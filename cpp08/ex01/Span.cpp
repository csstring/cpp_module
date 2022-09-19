#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

Span::Span() : maxSize(0)
{}
Span::Span(unsigned int maxSize) : maxSize(maxSize)
{}
Span::Span(const Span& copy)
{
	this->maxSize = copy.maxSize;
	this->myVector = copy.myVector;
}

Span& Span::operator=(const Span& ref)
{
	this->maxSize = ref.maxSize;
	this->myVector = ref.myVector;
	return (*this);
}

Span::~Span()
{}
unsigned int Span::shortestSpan(void) throw(SpanExecption)
{
	unsigned int min = UINT32_MAX;
	if (myVector.size() <= 1)
		throw (SpanExecption());
	else
		std::sort (myVector.begin(), myVector.end());
	for (std::vector<unsigned int>::iterator it = myVector.begin(); it + 1 != myVector.end(); it++)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
}

unsigned int Span::longestSpan(void) throw(SpanExecption)
{
	if (myVector.size() <= 1)
		throw (SpanExecption());
	std::sort (myVector.begin(), myVector.end());
	return (myVector.back() - myVector.front());
}

void Span::addNumber(unsigned int num) throw(AddNumberExecption, FullStoredExecption)
{
	if (maxSize == myVector.size())
		throw (FullStoredExecption());

	std::vector<unsigned int>::iterator it;
	it = find (myVector.begin(), myVector.end(), num);
	if (it != myVector.end())
		throw (AddNumberExecption());
	myVector.push_back(num);
}

unsigned int getRandomNumber()
{
	return (std::rand() % UINT32_MAX);
}

void Span::initNumberRange(unsigned int count) throw(FullStoredExecption)
{
	if (count > maxSize)
		throw (FullStoredExecption());
	std::vector<unsigned int>::iterator start;
	srand(time(NULL));
	myVector.resize(count);
	std::generate(myVector.begin(), myVector.end(), getRandomNumber);
}

void Span::displayVector()
{
	for (std::vector<unsigned int>::iterator it = myVector.begin(); it != myVector.end(); it++)
		std::cout << *it << std::endl;
}