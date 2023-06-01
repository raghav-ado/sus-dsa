/*
Problem Statement: Given an integer N , write program to count number of digits in N.

Example:
Input: N = 12345
Output: 5
*/

#include "../sussyheader.h"
using namespace std;

// O(n)
void countDigits(int N)
{
    int count = 0;
    while (N != 0)
    {
        N /= 10;
        count++;
    }
    cout << "[O(n)] Number of digits in " << N << " are: " << count << endl;
}

// O(1)
void countDigitsStringMethod(int N)
{
    cout << "[stringMethod] Number of digits in " << N << " are: " << to_string(N).length() << endl;
}

// O(1)
// n = 12345
// log10(12345) = 4.091
// Integral part of 4.091 is 4 and 4 + 1 =  5 which is also the number of digits in 12345
void countDigitsLog10Method(int N)
{
    cout << "[Log10Method] Number of digits in " << N << "are: " << floor(log10(N)) + 1 << endl;
}

int main()
{
    int N = getUserInput<int>("Enter a number: ");
    countDigits(N);
    countDigitsStringMethod(N);
    countDigitsLog10Method(N);
    return 0;
}