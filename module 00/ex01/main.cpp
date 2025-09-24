#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string prompt;
    PhoneBook pb;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, prompt)) {
            pb.Exit();
            break;
        }
        if (prompt == "ADD") {
            if (pb.Add() == -1) {
                pb.Exit();
                break;
            }
        }
        else if (prompt == "SEARCH") {
            if (pb.Search() == -1) {
                break;
            }
        }
        else if (prompt == "EXIT") {
            pb.Exit();
            break;
        }
        else
            std::cout << "Unknown command, Try Again !" << std::endl;
    }
}