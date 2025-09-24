#ifndef SEDFORLOSERS_HPP
#define SEDFORLOSERS_HPP
#include <iostream>
#include <fstream>
#include <string>

class SedForLosers {
private:
    std::string filename;
    std::string s1;
    std::string s2;

public:
    SedForLosers(const std::string& filename, const std::string& s1, const std::string& s2);

    bool validate() const;

    void replace() const;
};

#endif