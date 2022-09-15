#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base base;
	Base* randomBase;

	randomBase = base.generate();
	std::cout << randomBase->getMyName() << std::endl;
	return (0);
}