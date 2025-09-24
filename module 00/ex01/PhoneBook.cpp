#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), index(0) {}

PhoneBook::~PhoneBook() {}

void    PhoneBook::Exit() {
    std::cout << std::endl;
    std::cout << "GoodBye !" << std::endl;
}

int PhoneBook::Add()
{
    Contact newcontact;

    if (newcontact.Setcontact() == -1)
        return -1;

    contact[index] = newcontact;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
    std::cout << "Contact added successfully!" << std::endl;
    return 0;
}

int PhoneBook::Search()
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return 0;
    }

    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" << "|"
            << std::setw(10) << "Last Name" << "|"
            << std::setw(10) << "Nickname" << std::endl;
    
    for (int i = 0; i < count; i++) {
        contact[i].displayShort(i);
    }

    std::cout << "Enter the index to display details: ";
    std::string input;
    if (!std::getline(std::cin, input))
    {
        Exit();
        return -1;
    }

    size_t i = 0;
    while (i < input.length() && input[i] == '0')
        i++;

    if (i == input.length()) {
        std::cout << "Invalid index." << std::endl;
        return 0;
    }

    if (input.length() - i > 1 || input[i] < '1' || input[i] > '0' + count) {
        std::cout << "Invalid index." << std::endl;
        return 0;
    }
    int index = input[i] - '1';
    contact[index].displayFull();
    return 0;
}