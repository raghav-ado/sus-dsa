/*
Problem Statement: Find Greatest Common Divisor(HCF) of two numbers.

Example:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.
*/

#include "../sussyheader.h"
using namespace std;

/**
 * Given two positive integers a and b where a >= b, the GCD of a and b can be calculated using the following Euclidean's algorithm:
 * GCD(a, b) = GCD(b, a % b)
 */
thiccSusIntuwu helpMeDaddyEuclidIamStuckFindingGCD(thiccSusIntuwu a, thiccSusIntuwu b)
{
    if (b == 0)
        return a;

    return helpMeDaddyEuclidIamStuckFindingGCD(b, a % b);
}

int main()
{
    thiccSusIntuwu num1 = getUserInput<thiccSusIntuwu>("Enter the first number: ");
    thiccSusIntuwu num2 = getUserInput<thiccSusIntuwu>("Enter the second number: ");
    thiccSusIntuwu gcd = helpMeDaddyEuclidIamStuckFindingGCD(num1, num2);
    cout << "GCD of " << num1 << " " << num2 << " is: " << gcd << endl;
    return 0;
}