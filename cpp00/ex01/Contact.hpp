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
	int	 SetContact();
	void displaycontact(int index);
	void DisplayMyAllInfo(void);
	int	 GetContactInput(std::string  &type, const char *field_info);
};

#endif