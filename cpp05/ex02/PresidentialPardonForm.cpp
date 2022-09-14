#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{}
PresidentialPardonForm::PresidentialPardonForm(Form target) : Form(target.getName(), 25, 5)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	this->setName(ref.getName());
	this->setIndicateSigned(ref.getIndicateSigned());
	this->setRequireSign(ref.getRequireSign());
	this->setExecuteSign(ref.getExecuteSign());
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{}