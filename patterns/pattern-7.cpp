/*
PATTERN:
A
AB
ABC
ABCD
ABCDE
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a int value: ");
    const int ASCII_A_CODE = 65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << getCharacterFromAscii(ASCII_A_CODE + j);
        }
        cout << endl;
    }

    return 0;
}