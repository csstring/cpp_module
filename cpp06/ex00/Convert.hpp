#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <string>

class Convert
{
private:
	double doubleVal;
	std::string stringVal;
public:
	Convert();
	Convert(std::string input);
	Convert(const Convert& copy);
	Convert& operator=(const Convert& ref);
	~Convert();
	void setStringVal(std::string stringVal);
	void setDoubleVal(double doubleval);
	double getDoubleVal() const;
	std::string getStringVal() const;
	void intPrint();
	void doublePrint();
	void floatPrint();
	void charPrint();
};

#endif