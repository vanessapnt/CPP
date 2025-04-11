#include "Contact.hpp"

void Contact::setContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
	return Contact::firstName;
}

std::string Contact::getLastName() const
{
	return Contact::lastName;
}

std::string Contact::getNickname() const
{
	return Contact::nickname;
}

std::string Contact::getPhoneNumber() const
{
	return Contact::phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return Contact::darkestSecret;
}