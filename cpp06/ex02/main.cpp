#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base base;
	Base* baseTest = new Base;
	Base* randomBase;

	randomBase = base.generate();
	base.identify(baseTest);
	base.identify(*baseTest);
	base.identify(randomBase);
	base.identify(*randomBase);
	delete randomBase;
	return (0);
}