#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdio>

int main(void)
{
	std::string	temp;
	PhoneBook	book;
	int			cin_flag = 1;
	
	while (!std::cin.rdstate() && cin_flag)
	{
		std::cout << "input option : ADD, SEARCH, EXIT" << std::endl;
		temp.clear();
		std::getline (std::cin,temp);
		if (temp.compare("ADD") == 0)
			cin_flag = book._ADD_();
		else if (temp.compare("SEARCH") == 0)
			book._SEARCH_();
		else if (temp.compare("EXIT") == 0)
			break ;
	}
	return (0);
}