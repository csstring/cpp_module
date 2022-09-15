#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base::Base() : myName("Base")
{}
Base::Base(std::string name) : myName(name)
{}
Base* Base::generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
		case 0:
			A temp;
			return (dynamic_cast<Base*>(temp));
			break;
		case 1:
			return (B());
			break;
		case 2:
			return (C());
			break;
	}
}
Base:: ~Base()
{}
std::string Base::getMyName()
{
	return (myName);
}
