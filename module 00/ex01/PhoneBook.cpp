#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), index(0) {}

std::string Contact::truncate(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void Contact::displayShort(int index) {
    std::cout << std::setw(10) << index << "|"
                  << std::setw(10) << truncate(firstName) << "|"
                  << std::setw(10) << truncate(lastName) << "|"
                  << std::setw(10) << truncate(nickname) << "\n";
}

void Contact::displayFull() {
        std::cout << "First Name: " << firstName << "\n";
        std::cout << "Last Name: " << lastName << "\n";
        std::cout << "Nickname: " << nickname << "\n";
        std::cout << "Phone Number: " << phoneNumber << "\n";
        std::cout << "Darkest Secret: " << darkestSecret << "\n";
}

int Contact::setcontact()
{
    std::cout << "first name : ";
    std::getline(std::cin, firstName);
    if (firstName.empty())
        return 0;
    std::cout << "last name : ";
    std::getline(std::cin, lastName);
    if (lastName.empty())
        return 0;
    std::cout << "nickname : ";
    std::getline(std::cin, nickname);
    if (nickname.empty())
        return 0;
    std::cout << "phone number : ";
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty())
        return 0;
    std::cout << "darkest secret : ";
    std::getline(std::cin, darkestSecret);
    if (darkestSecret.empty())
        return 0;
    return 1;
}

void PhoneBook::add()
{
    Contact newcontact;

    if (!newcontact.setcontact())
    {
        std::cout << "Error: A saved contact can\'t have empty fields." << std::endl;
        return ;
    }
    contact[index] = newcontact;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
    std::cout << "Contact added successfully!\n";
}

void PhoneBook::search()
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" << "|"
            << std::setw(10) << "Last Name" << "|"
            << std::setw(10) << "Nickname" << "\n";
    
    for (int i = 0; i < count; i++) {
        contact[i].displayShort(i);
    }

    std::cout << "Enter the index to display details: ";
    std::string input;
    if (!std::getline(std::cin, input))
    {
        std::cout << "GoodBye !" << std::endl;
        return;
    }
    if (input.length() != 1 || input[0] < '0' || input[0] > '7') {
        std::cout << "Invalid index.\n";
        return;
    }
    int index = input[0] - '0';
    if (index >= count) {
        std::cout << "Index out of range.\n";
        return;
    }
    contact[index].displayFull();
}

int main()
{
    std::string prompt;
    PhoneBook pb;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, prompt)) {
            std::cout << "\nGoodBye !" << std::endl;
            break;
        }
        if (prompt == "ADD")
            pb.add();
        else if (prompt == "SEARCH")
            pb.search();
        else if (prompt == "EXIT") {
            std::cout << "GoodBye !" << std::endl;
            break;
        }
        else
            std::cout << "Unknown command, Try Again !" << std::endl;
    }
}