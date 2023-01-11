#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iomanip>
#include <iostream>


class contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
	public:
		std::string getfirst_name();
		std::string getlast_name();
		std::string getnickname();
		std::string getphone_number();
		std::string getsecret();

		void display();
		void setfirstname(std::string fname);
		void setlastname(std::string lname);
		void setnickname(std::string nname);
		void setphonenumber(std::string number);
		void setsecret(std::string secret);
};

#endif
