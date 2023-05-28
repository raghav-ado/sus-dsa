/*
PATTERN:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = handle_input();
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << temp + j << " ";
            if (j == i)
            {
                temp += j;
            }
        }
        cout << endl;
    }
    return 0;
}