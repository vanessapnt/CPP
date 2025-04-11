#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact contacts[8];
		int nextIndex;
		int contactCount;

	public :
		void addContact();
		void displayContacts();

};

#endif
