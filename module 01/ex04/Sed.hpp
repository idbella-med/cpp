#ifndef SED_HPP
#define SED_HPP
#include <iostream>
#include <fstream>
#include <string>

class Sed {
private:
    std::string filename;
    std::string s1;
    std::string s2;

public:
    Sed(std::string filename, std::string s1, std::string s2);

    bool validate();

    void replace();
};

#endif