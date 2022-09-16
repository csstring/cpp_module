#include "iter.hpp"

int main(void)
{
	int iTemp[5] = {0, 1, 2, 3, 4};
	char cTemp[5] = {'a', 'b', 'c', 'd', 'e'};
	float fTemp[5] = {0.1, 0.3, 0.5, 0.7, 0.9};
	double dTemp[5] = {0.1, 0.3, 0.5, 0.7, 0.9};

	iter(iTemp, 5, &callElement);
	iter(cTemp, 5, &callElement);
	iter(fTemp, 5, &callElement);
	iter(dTemp, 5, &callElement);
	return (0);
}