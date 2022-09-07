#include "Fixed.hpp"
#include "point.hpp"
#include <iostream>

int main(void) 
{
	Point const a(1,2);
	Point b(0, 0);
	Point c(2, 0);
	Point point(0,2);

/*	std::cout << a.getFloatxVal() << "y :" << a.getFloatyVal() << std::endl;
	std::cout << b.getFloatxVal() << "y :" << b.getFloatyVal() << std::endl;
	std::cout << c.getFloatxVal() << "y :" << c.getFloatyVal() << std::endl;
	std::cout << point.getFloatxVal() << "y :" << point.getFloatyVal() << std::endl;*/
	bsp(a, b, c, point);
	return 0;
}