#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span span(10000);

	try
	{
		span.initNumberRange(10000);
		std::cout << "shortestSpan : " << span.shortestSpan()<< std::endl;
		std::cout << "longestSpan : "<< span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	span.displayVector();
	return (0);
}