/* The most sussy one
 * PATTERN:
 * 5 5 5 5 5 5 5 5 5
 * 5 4 4 4 4 4 4 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 4 4 4 4 4 4 5
 * 5 5 5 5 5 5 5 5 5
 */

#include "../sussyheader.h"
#include <algorithm>
using namespace std;

int main()
{
    const int N = getUserInput<int>("Enter a sus but positive number: ");
    const int totalRows = 2 * N - 1;
    for (int i = 0; i < totalRows; i++)
    {
        for (int j = 0; j < totalRows; j++)
        {
            const int topDistance = i;
            const int leftDistance = j;
            const int rightDistance = (2 * N) - 2 - j;
            const int bottomDistance = (2 * N) - 2 - i;

            const int minimum = min({topDistance, bottomDistance, leftDistance, rightDistance});
            cout << N - minimum << ' ';
        }
        cout << endl;
    }
}