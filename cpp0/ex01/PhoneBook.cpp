#include "PhoneBook.hpp"
#include <iostream>

//std::cin >> variable;
//reads only one word, stopping at the first space or tab
//doesn't work with Jean Pierre

//std::getline(std::cin, variable);
//Reads the entire line, including spaces, until it reaches a newline (\n)

//empty() is a member function of the std::string class that checks if the string is empty
//setContact() is a member function of the Contact class

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "Adding a new contact..." << std::endl;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty() ||
	phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "All fields must be filled!" << std::endl;
		return;
	}

	this->contacts[this->nextIndex].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	this->nextIndex = (this->nextIndex + 1) % 8;
	if (this->contactCount < 8)
		this->contactCount++;

	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::displayContacts()
{
	
}