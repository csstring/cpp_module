#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat temp("schoe", 10);

	try
	{
		for (int i = 0; i < 150; i++)
		{
			temp.decrementGrade();
			std::cout << temp << std::endl;
		}
	}
	catch (std::exception &gradeException)
	{
		std::cout << gradeException.what() << std::endl;
	}
	try
	{
		for (int i = 0; i < 150; i++)
		{
			temp.incrementGrade();
			std::cout << temp << std::endl;
		}
	}
	catch (std::exception &gradeException)
	{
		std::cout << gradeException.what() << std::endl;
	}
	return (0);
}