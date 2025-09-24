#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        int Setcontact();
        int is_print(std::string str);
        int onlynumbers(std::string str);
        int onlyspace(std::string str);
        void displayShort(int index);
        void displayFull();
        std::string truncate(std::string str);

};
#endif