
#include <iostream>
#include "contact.hpp"

void contact::setfirstname(std::string fname)
{
	first_name = fname;
}
void contact::setlastname(std::string lname)
{
	last_name = lname;
}
void contact::setnickname(std::string nname)
{
	nickname = nname;
}
void contact::setphonenumber(std::string number)
{
	phone_number = number;
}
void contact::setsecret(std::string s)
{
	secret = s;
}

std::string contact::getfirst_name()
{
	return first_name;
}
std::string contact::getlast_name()
{
	return last_name;
}
std::string contact::getnickname()
{
	return nickname;
}
std::string contact::getphone_number()
{
	return phone_number;
}
std::string contact::getsecret()
{
	return secret;
}