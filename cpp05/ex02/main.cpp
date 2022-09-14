#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat temp("schoe", 1);
	ShrubberyCreationForm form("build construct");
	PresidentialPardonForm pardonform("Rokn");
	RobotomyRequestForm robotform("tayo_bus");


	temp.signForm(form);
	std::cout << form << std::endl;
	temp.executeForm(form);
	temp.executeForm(pardonform);
	temp.executeForm(robotform);
/*	Form form("build construct", 11, 1);

	std::cout << form << std::endl;
	try
	{
		form.beSigned(temp);
		std::cout<< form << std::endl;
	}
	catch (std::exception &gradeException)
	{
		std::cout << gradeException.what() << std::endl;
	}*/
	return (0);
}