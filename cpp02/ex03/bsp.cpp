#include "point.hpp"
#include <iostream>

float	vec3_cross(t_vec3 lhs, t_vec3 rhs)
{
	return (lhs.x * rhs.y - lhs.y * rhs.x);
}

t_vec3	vec3_minus(t_vec3 lhs, t_vec3 rhs)
{
	return ((t_vec3){lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z});
}

bool bsp2(t_vec3 line, t_vec3 cross1, t_vec3 cross2)
{
	float a = vec3_cross(line, cross1);
	float b = vec3_cross(line, cross2);

	if ((a < 0 && b < 0)||(a > 0 && b > 0))
		return(true);
	return (false);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	t_vec3 line;
	t_vec3 cross1;
	t_vec3 cross2;

	line = vec3_minus((t_vec3){b.getFloatxVal(), b.getFloatyVal(), 0}, (t_vec3){a.getFloatxVal(), a.getFloatyVal(), 0});
	cross1 = vec3_minus((t_vec3){c.getFloatxVal(), c.getFloatyVal(), 0}, (t_vec3){a.getFloatxVal(), a.getFloatyVal(), 0});
	cross2 = vec3_minus((t_vec3){point.getFloatxVal(), point.getFloatyVal(), 0}, (t_vec3){a.getFloatxVal(), a.getFloatyVal(), 0});
	if (bsp2(line, cross1, cross2))
		std::cout << "true"<< std::endl;
	else
		std::cout << "false" << std::endl;
	return (true);
}