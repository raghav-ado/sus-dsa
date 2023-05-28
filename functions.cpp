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

int handle_input()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    return n;
}
