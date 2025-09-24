#include "Contact.hpp"

int Contact::is_print(std::string str) {
    for(int i = 0; i < (int)str.length(); i++) {
        if(!std::isprint(str[i])) {
            return 0;
        }
    }
    return 1;
}

int Contact::onlyspace(std::string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!std::isspace(str[i])) {
            return 1;
        }
    }
    return 0;
}

int Contact::onlynumbers(std::string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!std::isdigit(str[i]) && !(i == 0 && str[i] == '+')) {
            return 0;
        }
    }
    return 1;
}

std::string Contact::truncate(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void Contact::displayFull() {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::displayShort(int index) {
    std::cout << std::setw(10) << index + 1 << "|"
                  << std::setw(10) << truncate(firstName) << "|"
                  << std::setw(10) << truncate(lastName) << "|"
                  << std::setw(10) << truncate(nickname) << std::endl;
}

int Contact::Setcontact()
{
    std::cout << "first name : ";
    if (!std::getline(std::cin, firstName))
        return -1;
    while (firstName.empty() || !is_print(firstName) || !onlyspace(firstName)) {
        std::cout << "Error: not valid input. Try again!" << std::endl;
        std::cout << "first name : ";
        if (!std::getline(std::cin, firstName))
            return -1;
    }

    std::cout << "last name : ";
    if (!std::getline(std::cin, lastName))
        return -1;
    while (lastName.empty() || !is_print(lastName) || !onlyspace(lastName)) {
        std::cout << "Error: not valid input. Try again!" << std::endl;
        std::cout << "last name : ";
        if (!std::getline(std::cin, lastName))
            return -1;
    }

    std::cout << "nickname : ";
    if (!std::getline(std::cin, nickname))
        return -1;
    while (nickname.empty() || !is_print(nickname) || !onlyspace(nickname)) {
        std::cout << "Error: not valid input. Try again!" << std::endl;
        std::cout << "nickname : ";
        if (!std::getline(std::cin, nickname))
            return -1;
    }

    std::cout << "phone number : ";
    if (!std::getline(std::cin, phoneNumber))
        return -1;
    while (phoneNumber.empty() || !onlynumbers(phoneNumber)) {
        std::cout << "Error: phone number can only be numbers. Try again!" << std::endl;
        std::cout << "phone number : ";
        if (!std::getline(std::cin, phoneNumber))
            return -1;
    }

    std::cout << "darkest secret : ";
    if (!std::getline(std::cin, darkestSecret))
        return -1;
    while (darkestSecret.empty() || !is_print(darkestSecret) || !onlyspace(darkestSecret)) {
        std::cout << "Error: not valid input. Try again!" << std::endl;
        std::cout << "darkest secret : ";
        if (!std::getline(std::cin, darkestSecret))
            return -1;
    }
    return 0;
}

