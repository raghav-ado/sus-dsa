// functions.h

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

template <typename T>
T getUserInput(const std::string &prompt)
{
    T input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

void print_char(int num, char c);
void print_nums(int num);
char getCharacterFromAscii(int asciiCode);

#endif
