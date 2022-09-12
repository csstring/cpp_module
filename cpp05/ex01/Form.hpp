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
	From(const Form& copy);
	Form& operator=(const From& ref);
	std::string getName();
	bool getIndicateSigned();
	int	getRequireSign();
	int getExecuteSign();
	~Form();
	void incrementGrade() throw(GradeTooHighException);
	void decrementGrade() throw(GradeTooLowException);
	beSigned(const Bureaucrat& ref); 
	//It changes the form status to signed if the bureaucrat’s grade is high enough 
	//(higher or egal to the required one
	class GradeTooHighException : public std::exception
	{
	public:
		virtual ~GradeTooHighException() throw()
		{}
  		virtual const char* what() const throw() {
			return ("GradeTooHigh!!\n");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual ~GradeTooLowException() throw()
		{}
  		virtual const char* what() const throw() {
			return ("GradeTooLow!!\n");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const From& ref);

#endif