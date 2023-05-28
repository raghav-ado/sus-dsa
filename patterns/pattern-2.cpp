#include "../sussyheader.h"
using namespace std;

void print_char(int num, char c)
{
    while (num--)
    {
        cout << c;
    }
}

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
    return 0;
}