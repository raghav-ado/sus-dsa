/*
PATTERN: sus👀
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include "../sussyheader.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a positive integer: ");
    for (int i = 2 * n; i > 0; i--)
    {
        const int stars = i > n ? i - n : n - (i - 1);
        const int spaces = 2 * (n - stars);

        print_char(stars, '*');
        print_char(spaces, ' ');
        print_char(stars, '*');
        cout << endl;
    }
    return 0;
}