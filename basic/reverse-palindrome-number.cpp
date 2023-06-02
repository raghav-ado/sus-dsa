/*
Problem Statement: Given a number N reverse the number and print it.

Example:
Input: N = 123
Output: 321

*/

#include "../sussyheader.h"
using namespace std;

/**
Approach:
- Run a while loop until the given number N is equal to zero while(N!=0)
- Initialize a variable reverse = 0;
- now in each step take the remainder of the given number N and store it as a variable digit, digit = N % 10
- Also, Divide the number by 10. N= N / 10
- In each step, the variable reverse get updated as reverse = reverse*10+digit.
*/
thiccSusIntuwu reverse1(thiccSusIntuwu n)
{
    thiccSusIntuwu result = 0;
    while (n != 0)
    {
        thiccSusIntuwu digit = n % 10;
        result = result * 10 + digit;
        n /= 10;
    }
    return result;
}

int main()
{
    thiccSusIntuwu N = getUserInput<thiccSusIntuwu>("Enter a number: ");
    thiccSusIntuwu reverse = reverse1(N);
    cout << "Reverse of the number " << N << " is: " << reverse << " and it's" << (N == reverse ? " " : " not ") << "a palindrome" << endl;

    return 0;
}
