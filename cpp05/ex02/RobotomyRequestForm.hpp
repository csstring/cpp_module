#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
	~RobotomyRequestForm();
	void execute(Bureaucrat const& executor) const throw(Bureaucrat::GradeTooLowException);
};

#endif