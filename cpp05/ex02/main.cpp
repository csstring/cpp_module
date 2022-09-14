#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat temp("schoe", 140);
	ShrubberyCreationForm form("build construct");

	temp.signForm(form);
	temp.executeForm(form);
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