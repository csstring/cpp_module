#include <iostream>
#include "Convert.hpp"
#include <cmath>

int	main(int ac, char **av)
{
	std::string s_val;
	Convert convert;

	if (ac != 2)
	{
		std::cout << "argument count error" << std::endl;
		return(1);
	}
	s_val.assign(av[1]);
	convert = Convert(s_val);
	convert.charPrint();
	convert.intPrint();
	convert.floatPrint();
	convert.doublePrint();
	return (0);
}