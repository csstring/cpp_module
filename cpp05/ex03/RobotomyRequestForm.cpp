#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form()
{}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	this->setName(ref);
	this->setIndicateSigned(ref);
	this->setRequireSign(ref);
	this->setExecuteSign(ref);
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{}
void RobotomyRequestForm::execute(Bureaucrat const& executor) const throw(Bureaucrat::GradeTooLowException)
{
	beExecuteCheck(executor);
	std::cout << executor.getName() <<" executed " << getName() << std::endl;
	std::cout << "drilling noises..." << std::endl;
	srand(time(NULL));
	int i = rand() % 2;
	if (i)
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getName() << " has been robotomized fail" << std::endl;
}