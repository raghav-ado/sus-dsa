// functions.cpp

#include <iostream>
#include "functions.h"

void print_char(int num, char c)
{
    while (num--)
    {
        std::cout << c;
    }
}

void print_nums(int num)
{
    for (int i = 1; i <= num; i++)
    {
        std::cout << i;
    }
}

char getCharacterFromAscii(int asciiCode)
{
    return static_cast<char>(asciiCode);
}
