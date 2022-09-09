#include "Fixed.hpp"
#include "point.hpp"
#include <iostream>

int main(void) 
{
	Point a(1,2);
	Point b(0, 0);
	Point c(2, 0);
	Point point(1, 1.998);
	
	bsp(a, b, c, point);
	return 0;
}