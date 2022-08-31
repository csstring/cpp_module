#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdio>

int main(void)
{
	std::string	temp;
	PhoneBook	book;

	std::cout << "input option : ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cin >>	temp;
		if (std::cin.rdstate() != 0)
			break;
		else if (temp.compare("ADD") == 0)
			book._ADD_();
		else if (temp.compare("SEARCH") == 0)
			book._SEARCH_();
		else if (temp.compare("EXIT") == 0)
			std::cout << "EXIT" << std::endl;
		else
			std::cout << "input option : ADD, SEARCH, EXIT" << std::endl;
	}
}