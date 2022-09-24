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
	Form*	temp;

	temp = someRandomIntern.makeForm("asdf", "asdfasda");
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
	main2();
	system("leaks a.out");
	return (0);
}