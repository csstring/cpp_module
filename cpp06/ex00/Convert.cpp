#include "Convert.hpp"
#include <iostream>
#include <cctype>

Convert::Convert() : doubleVal(0), stringVal("")
{}
Convert::Convert(std::string input)
{
	char *end_check;

	if ((input.compare("-inf") && input.compare("inf")) && input.back() == 'f')
		input.pop_back();
	stringVal.assign(input);
	doubleVal = strtod(stringVal.c_str(), &end_check);
	if (*end_check != '\0')
	{
		doubleVal = strtod("nan", NULL);
		stringVal.assign("nan");
	}
}

Convert::Convert(const Convert& copy)
{
	*this = copy;
}
Convert& Convert::operator=(const Convert& ref)
{
	setDoubleVal(ref.getDoubleVal());
	setStringVal(ref.getStringVal());
	return (*this);
}

Convert::~Convert()
{}
void Convert::setStringVal(std::string stringVal)
{
	this->stringVal.assign(stringVal);
}

void Convert::setDoubleVal(double val)
{
	this->doubleVal = val;
}

double Convert::getDoubleVal() const
{
	return (doubleVal);
}

std::string Convert::getStringVal() const
{
	return (stringVal);
}

void Convert::intPrint()
{
	if (!stringVal.compare("nan") || isinf(doubleVal))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: "<< static_cast<int>(doubleVal) <<std::endl;
}

void Convert::doublePrint()
{
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "double: "<< doubleVal << std::endl;
	std::cout.unsetf(std::ios::fixed);
}
void Convert::floatPrint()
{
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "float: " << static_cast<float>(doubleVal) << "f" << std::endl;
	std::cout.unsetf(std::ios::fixed);
}
void Convert::charPrint()
{
	if (!stringVal.compare("nan") || isinf(doubleVal))
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<int>(doubleVal)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(doubleVal) << "'" << std::endl;
}
