#include "point.hpp"
#include <iostream>

float	vec3_cross(t_vec3 lhs, t_vec3 rhs)
{
	return (lhs.x * rhs.y - lhs.y * rhs.x);
}

t_vec3	vec3_minus( Point const a, Point const b)
{
	t_vec3 lhs = {a.getFloatxVal(), a.getFloatyVal(), 0};
	t_vec3 rhs = {b.getFloatxVal(), b.getFloatyVal(), 0};
	return ((t_vec3){lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z});
}

bool crossCheck(t_vec3 line, t_vec3 cross1, t_vec3 cross2)
{
	float a = vec3_cross(line, cross1);
	float b = vec3_cross(line, cross2);

	if ((a < 0 && b < 0)||(a > 0 && b > 0))
		return(true);
	return (false);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	t_vec3 line[3];
	t_vec3 cross1[3];
	t_vec3 cross2[3];

	line[0] = vec3_minus(b,a);
	cross1[0] = vec3_minus(c,a);
	cross2[0] = vec3_minus(point,a);
	line[1] = vec3_minus(c,b);
	cross1[1] = vec3_minus(a,b);
	cross2[1] = vec3_minus(point,b);
	line[2] = vec3_minus(a,c);
	cross1[2] = vec3_minus(b,c);
	cross2[2] = vec3_minus(point,c);
	for (int i = 0; i < 3; i++)
	{
		if (!crossCheck(line[i], cross1[i], cross2[i]))
		{
			std::cout << "false" << std::endl;
			return (false);
		}
	}
	std::cout << "true"<< std::endl;
	return (true);
}