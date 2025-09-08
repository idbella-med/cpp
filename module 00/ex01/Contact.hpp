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
        int setcontact();
        void displayShort(int index);
        void displayFull();
        std::string truncate(std::string str);

};