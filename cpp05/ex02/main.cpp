#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void ftTest(Bureaucrat temp)
{
	std::cout << "--------Bureaucrat "<< temp.getName() << " is start------" <<std::endl;
	std::cout << "Bureaucrat grade: "<< temp.getGrade() << std::endl;
	ShrubberyCreationForm shrubberyform("build construct");
	RobotomyRequestForm robotform("tayo_bus");
	PresidentialPardonForm pardonform("Rokn");


	temp.signForm(shrubberyform);
	temp.signForm(robotform);
	temp.signForm(pardonform);
	std::cout << shrubberyform << std::endl;
	std::cout << robotform << std::endl;
	std::cout << pardonform << std::endl;
	temp.executeForm(shrubberyform);
	temp.executeForm(robotform);
	temp.executeForm(pardonform);
	std::cout << "------Bureaucrat "<< temp.getName() << " is end-------" <<std::endl;
}

int	main(void)
{
	Bureaucrat temp1("schoe", 150);
	Bureaucrat temp2("schoe", 145);
	Bureaucrat temp3("schoe", 137);
	Bureaucrat temp4("schoe", 72);
	Bureaucrat temp5("schoe", 45);
	Bureaucrat temp6("schoe", 25);
	Bureaucrat temp7("schoe", 5);

	ftTest(temp1);
	ftTest(temp2);
	ftTest(temp3);
	ftTest(temp4);
	ftTest(temp5);
	ftTest(temp6);
	ftTest(temp7);
	return (0);
}