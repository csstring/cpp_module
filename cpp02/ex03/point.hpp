#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

typedef struct s_vec
{
	float x;
	float y;
	float z;
} t_vec3;

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point &copy);
	Point& operator=(const Point &ref);
	float getFloatxVal(void) const;
	float getFloatyVal(void) const;
	~Point(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif