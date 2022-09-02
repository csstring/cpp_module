#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>

void PhoneBook::displayall(void)
{
	unsigned int temp;

	std::cout << "     index|";
	std::cout << "first name|";
	std::cout << " last name|";
	std::cout << "  nickname|" << std::endl;
	if (member_count > 8)
		temp = 8;
	else
		temp = member_count;
	for (unsigned int i = 0; i < temp; i++)
		contacts[i].displaycontact(i);
}

int PhoneBook::_ADD_(void)
{	
	if (!contacts[member_count % 8].SetContact())
		return (0);
	member_count++;
	return (1);
}

int	index_check(std::string temp)
{
	if (temp.length() != 1 || (temp[0] < 48 || temp[0] > 57))
		return (-1);
	return ((int)(temp[0] - 48));
}

void PhoneBook::_SEARCH_(void)
{
	std::string temp;
	int	index;

	displayall();
	while (!std::cin.rdstate())
	{
		std::cout << "prompt a index (index range : 0~7) >> " << std::endl;
		temp.clear();
		std::getline (std::cin, temp);
		if (std::cin.rdstate())
			exit(1);
		index = index_check(temp);
		if (index < 8 && index >= 0)
		{
			contacts[index].DisplayMyAllInfo();
			break ;
		}
	}
}