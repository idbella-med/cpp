#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int count;
        int index;
    
    public:
        PhoneBook();
        ~PhoneBook();
        int Add();
        int Search();
        void Exit();
};
#endif