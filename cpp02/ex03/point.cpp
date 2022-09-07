#include "point.hpp"

Point::Point(void) :x(0), y(0)
{}
Point::Point(const float x, const float y) : x(x), y(y)
{}
Point::Point(const Point &copy)
{
	*this = copy;
}

Point& Point::operator=(const Point &ref)
{
	const_cast<Fixed &>(this->x) = ref.x;
	const_cast<Fixed &>(this->y) = ref.y;
	return (*this);
}

Point::~Point(void)
{}

float Point::getFloatxVal(void) const
{
	return(x.toFloat());
}

float Point::getFloatyVal(void) const
{
	return(y.toFloat());
}