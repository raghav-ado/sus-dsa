/*
PATTERN:
1
10
101
1010
10101
 */

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a int value: ");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
    return 0;
}