/*
PATTERN:
   A
  ABA
 ABCBA
ABCDCBA
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = getUserInput<int>("Enter a int value: ");

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';

        print_char(n - i - 1, ' ');
        int columns = 2 * i + 1;
        for (int j = 1; j <= columns; j++)
        {
            cout << ch;
            if (j <= columns / 2)
                ch++;
            else
                ch--;
        }
        print_char(n - i - 1, ' ');
        cout << endl;
    }
    return 0;
}