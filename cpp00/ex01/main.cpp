#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdio>

int main(void)
{
	std::string	temp;
	PhoneBook	book;

	while (!std::cin.rdstate())
	{
		std::cout << "input option : ADD, SEARCH, EXIT" << std::endl;
		std::getline (std::cin,temp);
		if (temp.compare("ADD") == 0)
			book._ADD_();
		else if (temp.compare("SEARCH") == 0)
			book._SEARCH_();
		else if (temp.compare("EXIT") == 0)
			std::cout << "EXIT" << std::endl;
	}
}