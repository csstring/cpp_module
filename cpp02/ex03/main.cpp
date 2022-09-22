#include "Fixed.hpp"
#include "point.hpp"
#include <iostream>

int main(void) 
{
	Point a(1,2);
	Point b(0, 0);
	Point c(2, 0);
	Point point(1, 1.998);
	Point point1(1, 1.5);
	Point point2(1, -1.998);
	Point point3(1, 0.1);
	Point point4(-1, 0.3);
	
	bsp(a, b, c, point);
	bsp(a, b, c, point1);
	bsp(a, b, c, point2);
	bsp(a, b, c, point3);
	bsp(a, b, c, point4);
	return 0;
}