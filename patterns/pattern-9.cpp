/*
PATTERN:
E
DE
CDE
BCDE
ABCDE
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a positive integer: ");
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}