/*
PATTERN:
*
**
***
****
*****
****
***
**
*

*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    const int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++)
    {
        if (i <= n)
        {
            print_char(i, '*');
        }
        else
        {
            int temp = i - n - 1;
            print_char(totalRows - n - temp, '*');
        }
        cout << endl;
    }

    return 0;
}