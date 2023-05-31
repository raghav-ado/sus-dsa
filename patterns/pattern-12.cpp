/*
PATTERN:
*****
*   *
*   *
*   *
*****

*/

#include "../sussyheader.h"
using namespace std;

// BLEH dumb approach, Don't over use your brain, you dumb sussy-baka author
__deprecated void printPatternOverComplicatedApproach(int total)
{

    for (int i = 0; i < total; i++)
    {
        const bool isFirstOrLastRow = i == 0 || i == total - 1;
        const bool isNEven = total % 2 == 0;
        const int temp = total / 2 + (isNEven ? 0 : 1);
        const int firstHalfStars = isFirstOrLastRow ? temp : 1;
        const int secondHalfStars = isFirstOrLastRow ? total - firstHalfStars : 1;

        print_char(firstHalfStars, '*');

        if (!isFirstOrLastRow)
        {
            const int spaces = total - 2;
            print_char(spaces, ' ');
        }

        print_char(secondHalfStars, '*');

        cout << endl;
    }
}

void printPatternElegantly(int total)
{
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < total; j++)
        {
            if (i == 0 || j == 0 || i == total - 1 || j == total - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int total = getUserInput<int>("Enter a positive integer: ");
    printPatternElegantly(total);
    return 0;
}