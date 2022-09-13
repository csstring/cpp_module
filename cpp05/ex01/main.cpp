#include "Bureaucrat.hpp"
#include "Form.hpp"
int	main(void)
{
	Bureaucrat temp("schoe", 10);
	Form form("build construct", 11, 1);

	std::cout << form << std::endl;
	try
	{
		form.beSigned(temp);
		std::cout<< form << std::endl;
	}
	catch (std::exception &gradeException)
	{
		std::cout << gradeException.what() << std::endl;
	}
	return (0);
}