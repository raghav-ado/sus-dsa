/*
PATTERN:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a positive integer: ");
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i <= n ? i : n - (i - n);
        const int spaces = 2 * (n - stars);

        print_char(stars, '*');
        print_char(spaces, ' ');
        print_char(stars, '*');
        cout << endl;
    }
    return 0;
}