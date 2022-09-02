#include "Contact.hpp"
#include <iostream>
#include <string>


int Contact:: GetContactInput(std::string &type, const char *field_info)
{
	type.clear();
	std::cout << "typing your " << field_info << " >>" << std::endl;
	std::getline (std::cin, type);
	if (std::cin.rdstate() != 0)
		return (0);
	return (1);
}

int Contact:: SetContact(void)
{
	if (GetContactInput(first_name , "first_name") &&
		GetContactInput(last_name , "last_name") &&
		GetContactInput(nick_name , "nick_name") &&
		GetContactInput(phone_number , "phone_number") &&
		GetContactInput(darkest_secret , "darkest_secret"))
		return (1);
	return (0);
}

void	displaycontact2(std::string &type)
{
	if (type.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << type[i];
		std::cout << ".|" ;
	}
	else
		for(unsigned long i = 1; i < 11; i++)
		{
			if (i <= 10 - type.length())
				std::cout << " ";
			else
			{
				std::cout << type << "|" ;
				break ;
			}
		}
}

void Contact:: displaycontact(int index)
{
	std::cout << "         " << std::to_string(index) << "|";
	displaycontact2(first_name);
	displaycontact2(last_name);
	displaycontact2(nick_name);
	std::cout << std::endl;
}

void Contact::DisplayMyAllInfo(void)
{
	std::cout << "first_name : " << first_name << std::endl;
	std::cout << "last_name : " << last_name << std::endl;
	std::cout << "nick_name : " << nick_name << std:: endl;
	std::cout << "phone_number : " << phone_number << std::endl;
	std::cout << "darkest_secret : " << darkest_secret << std::endl;
}