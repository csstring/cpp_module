#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <exception>
#include <iostream>

class Form;
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& ref);
	~Bureaucrat();
	std::string getName() const;
	int	getGrade() const;
	void incrementGrade() throw(GradeTooHighException);
	void decrementGrade() throw(GradeTooLowException);
	void executeForm(Form const & form);
	void signForm(Form &form);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual ~GradeTooHighException() throw()
		{}
  		virtual const char* what() const throw() {
			return ("GradeTooHigh!!");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual ~GradeTooLowException() throw()
		{}
  		virtual const char* what() const throw() {
			return ("GradeTooLow!!");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref);

#endif