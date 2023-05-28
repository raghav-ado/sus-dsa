#include "../sussyheader.h"
#include "../functions.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter pyramid rows count: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        print_char(n - i, ' ');
        print_char(2 * i - 1, '*');
        print_char(n - i, ' ');
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        print_char(n - i, ' ');
        print_char(2 * i - 1, '*');
        print_char(n - i, ' ');
        cout << endl;
    }
    return 0;
}