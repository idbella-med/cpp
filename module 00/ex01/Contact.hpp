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
        int is_print(std::string str);
        int onlynumbers(std::string str);
        void displayShort(int index);
        void displayFull();
        std::string truncate(std::string str);

};