#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int count;
        int index;

    public:
        PhoneBook();
        void add();
        void search();
};