#ifndef BASE_HPP
#define BASE_HPP
#include <string>

class Base
{
private:
	std::string myName;
public:
	Base();
	Base(std::string name);
	Base* generate(void);
	virtual ~Base();
	std::string getMyName();
};

#endif