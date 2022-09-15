#include "Intern.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern& copy)
{
	*this = copy;
}
Intern& Intern::operator=(const Intern& ref)
{
	(void)ref;
	return (*this);
}

Intern::~Intern()
{}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
	Form	*form = NULL;
	std::string formtemplte[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (!formName.compare(formtemplte[i]))
		{
			switch (i)
			{
				case 0:
					form = new PresidentialPardonForm(formTarget);
					break;
				case 1:
					form = new RobotomyRequestForm(formTarget);
					break;
				case 2:
					form = new ShrubberyCreationForm(formTarget);
					break;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (form);
		}
	}
	std::cout << formName << " : we don't have this form" << std::endl;
	return (form);
}