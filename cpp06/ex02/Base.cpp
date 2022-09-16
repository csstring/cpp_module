#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <typeinfo>

Base::Base()
{}
Base* Base::generate(void)
{
	Base *temp = NULL;

	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
		case 0:
			temp = new A;
			break;
		case 1:
			temp = new B;
			break;
		case 2:
			temp = new C;
			break;
	}
	return (temp);
}

Base:: ~Base()
{
	std::cout << "Base destructor called.." << std::endl;
}

void Base::identify(Base* p)
{
	A *checkA = dynamic_cast<A*>(p);
	B *checkB = dynamic_cast<B*>(p);
	C *checkC = dynamic_cast<C*>(p);

	if (checkA)
		std::cout << "(point identify)input Base is A!!!" << std::endl;
	else if (checkB)
		std::cout << "(point identify)input Base is B!!!" << std::endl;
	else if (checkC)
		std::cout << "(point identify)input Base is C!!!" << std::endl;
	else
		std::cout << "(point identify)input Base is Base!!" << std::endl;
}

void Base::identify(Base& p)
{
	try
	{
		A& checkA = dynamic_cast<A&>(p);
		(void)checkA;
		std::cout << "(ref identify)input Base is A!!!" << std::endl;
		return;
	}
	catch(std::bad_cast& castFileExecption)
	{}
	try
	{
		B& checkB = dynamic_cast<B&>(p);
		(void)checkB;
		std::cout << "(ref identify)input Base is B!!!" << std::endl;
		return;
	}
	catch(std::bad_cast& castFileExecption)
	{}
	try
	{
		C& checkC = dynamic_cast<C&>(p);
		(void)checkC;
		std::cout << "(ref identify)input Base is C!!!" << std::endl;
		return;
	}
	catch(std::bad_cast& castFileExecption)
	{}
	std::cout << "(ref identify)input Base is Base!!!" << std::endl;
}