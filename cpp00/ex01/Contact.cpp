#include "Contact.hpp"
#include <iostream>
#include <string>

void Contact:: GetContactInput(std::string &type, const char *field_info)
{
	std::cin.clear();
	std::cout << "typing your " << field_info << " >>" << std::endl;
	std::getline (std::cin, type);
	if (std::cin.rdstate() != 0)
		exit (1);
}

void Contact:: SetContact(void)
{
	GetContactInput(first_name , "first_name");
	GetContactInput(last_name , "last_name");
	GetContactInput(nick_name , "nick_name");
	GetContactInput(phone_number , "phone_number");
	GetContactInput(darkest_secret , "darkest_secret");
}

void Contact:: displaycontact(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}