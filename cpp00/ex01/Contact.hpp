#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
//	Contact();
	void SetContact();
	void displaycontact();
	void GetContactInput(std::string  &type, const char *field_info);
//	~Contact();
};
/*
Contact::Contact()
{
}

Contact::~Contact()
{
}*/

#endif