#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
	private:
		unsigned int member_count;
		Contact contacts[8];
	public:
		int	 _ADD_(void);
		int _SEARCH_(void);
		void displayall(void);
};

#endif