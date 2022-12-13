#include "phonebook.hpp"




void alert_msg()
{
    std::cout << "this field can't be empty" << std::endl;
}

PhoneBook::PhoneBook()
{
    index = -1;
}

PhoneBook::~PhoneBook()
{
    return;
}

void PhoneBook::add_contact()
{
    contact contact;
    std::string fname, lname, nickname, phone, secret;
    do{
        std::cout << "Enter The First Name : ";
        if(!std::getline(std::cin, fname))
                exit(1);
        if(fname.empty())
            alert_msg();
    }
    while(fname.empty());
    contact.setfirstname(fname);

    do{
        std::cout << "Enter The Last Name : ";
        if(!std::getline(std::cin, lname))
            exit(1);
        if(lname.empty())
            alert_msg();
    }
    while(lname.empty());
    contact.setlastname(lname);
    
    do{
        std::cout << "Enter The Nickname : ";
        if (!std::getline(std::cin, nickname))
            exit(1);
        if (nickname.empty())
            alert_msg();
    }
    while(nickname.empty());
    contact.setnickname(nickname);

    do{
        std::cout << "Enter The Phone Number : ";
        if(!std::getline(std::cin, phone))
            exit(1);
        if(phone.empty())
            alert_msg();
    }
    while(phone.empty());
    contact.setphonenumber(phone);

    do{
        std::cout << "Enter The Darkest Secret : ";
        if(!std::getline(std::cin, secret))
            exit(1);
        if(secret.empty())
            alert_msg();
    }
    while(secret.empty());
    contact.setsecret(secret);
    if(index == 7)
        index = -1;
    contacts[(++index) % 8] = contact;
}
