#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"



int main (void)
{
    PhoneBook t_PhoneBook = PhoneBook();
    
    while(true)
    {
        std::string command;
        std::cout<< "Phonebook> ";

        if (!std::getline(std::cin, command))
            exit(1);
        if (command == "ADD")
            t_PhoneBook.add_contact();
        else if (command == "SEARCH")
            t_PhoneBook.search_contacts();
        else if (command == "EXIT")
            exit(0);
    }
}
