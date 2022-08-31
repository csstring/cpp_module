#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		unsigned int i;
		Contact contacts[8];
	public:
	//	PhoneBook();
		void _ADD_(void);
		void _SEARCH_(void);
		void _exit_(void);
	//	~PhoneBook();
};
/*
PhoneBook::PhoneBook()
{
	i = 0;
}

PhoneBook::~PhoneBook()
{
}*/

#endif