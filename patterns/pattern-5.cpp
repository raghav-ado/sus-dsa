/*
PATTERN:
1      1
12    12
123  123
12341234
*/

#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n = handle_input();
    for (int i = 1; i <= n; i++)
    {
        const int spaces = 2 * (n - i);

        print_nums(i);
        print_char(spaces, ' ');
        print_nums(i);
        cout << endl;
    }
    return 0;
}