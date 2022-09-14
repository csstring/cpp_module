#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{}
RobotomyRequestForm::RobotomyRequestForm(Form target) : Form(target.getName(), 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	this->setName(ref.getName());
	this->setIndicateSigned(ref.getIndicateSigned());
	this->setRequireSign(ref.getRequireSign());
	this->setExecuteSign(ref.getExecuteSign());
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{}