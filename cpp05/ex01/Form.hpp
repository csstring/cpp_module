#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool indicateSigned;
	const int requireSign;
	const int executeSign;
public:
	Form();
	Form(std::string name, const int requireSign, const int executeSign);
	Form(const Form& copy);
	Form& operator=(const Form& ref);
	std::string getName() const;
	bool getIndicateSigned() const;
	int	getRequireSign() const;
	int getExecuteSign() const;
	~Form();
	void beSigned(const Bureaucrat& ref) throw(Bureaucrat::GradeTooLowException);
};

std::ostream& operator<<(std::ostream& os, const Form& ref);
#endif