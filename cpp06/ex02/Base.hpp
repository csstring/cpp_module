#ifndef BASE_HPP
#define BASE_HPP
#include <string>
#include <iostream>
class Base
{
private:
	std::string myName;
public:
	Base();
	Base* generate(void);
	virtual ~Base();
	void identify(Base* p);
	void identify(Base& p);
};

#endif