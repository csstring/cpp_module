#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void main2(void)
{
	Bureaucrat human("schoe", 1);
	Intern  someRandomIntern;
    Form*   rrf;
	Form*   shr;
	Form*   presi;
	rrf = someRandomIntern.makeForm("robotomy request", "tayo_bus");
	shr = someRandomIntern.makeForm("shrubbery creation", "home");
	presi = someRandomIntern.makeForm("presidential pardon", "bender");
	
	human.signForm(*rrf);
	std::cout << *rrf << std::endl;
	human.executeForm(*rrf);
	human.executeForm(*shr);
	human.executeForm(*presi);
	delete presi;
	delete shr;
	delete rrf;
}

int	main(void)
{
/*	Bureaucrat temp("schoe", 1);
	ShrubberyCreationForm form("build construct");
	PresidentialPardonForm pardonform("Rokn");
	RobotomyRequestForm robotform("tayo_bus");


	temp.signForm(form);
	std::cout << form << std::endl;
	temp.executeForm(form);
	temp.executeForm(pardonform);
	temp.executeForm(robotform);*/
	main2();
	system("leaks a.out");
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