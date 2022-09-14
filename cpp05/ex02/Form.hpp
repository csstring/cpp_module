#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
//class Bureaucrat;
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
	void setName(const Form& ref);
	void setIndicateSigned(const Form& ref);
	void setRequireSign(const Form& ref);
	void setExecuteSign(const Form& ref);
	virtual void execute(Bureaucrat const & executor) const = 0;
	~Form();
	void beSigned(Bureaucrat& ref) throw(Bureaucrat::GradeTooLowException);
	void beExecuteCheck(const Bureaucrat& executor) const throw(Bureaucrat::GradeTooLowException);
};

std::ostream& operator<<(std::ostream& os, const Form& ref);

#endif