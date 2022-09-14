#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	static const std::string asciiTree;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const& executor) const throw(InOutFileException, Bureaucrat::GradeTooLowException);
	class InOutFileException : public std::exception
	{
	public:
		virtual ~InOutFileException() throw()
		{}
  		virtual const char* what() const throw() {
			return ("out file open error!!");
		}
	};
};


#endif