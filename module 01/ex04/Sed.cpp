#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2)
        : filename(filename), s1(s1), s2(s2) {}

bool Sed::validate() {
    if (filename.empty() || s1.empty()) {
        std::cerr << "Error: Filename and s1 must not be empty.\n";
        return false;
    }
    return true;
}

void Sed::replace() {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Could not open input file " << filename << "\n";
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not create output file " << filename << ".replace\n";
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outputFile << line << "\n";
    }
}