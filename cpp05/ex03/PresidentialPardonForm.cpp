#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	this->setName(ref);
	this->setIndicateSigned(ref);
	this->setRequireSign(ref);
	this->setExecuteSign(ref);
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const throw(Bureaucrat::GradeTooLowException)
{
	beExecuteCheck(executor);
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}