#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& ref);
	~Intern();
	Form* makeForm(std::string formName, std::string formTarget);
};

#endif