/**
 * The given C++ program calculates the greatest common divisor (GCD) of two numbers using the
 * Euclidean algorithm.
 *
 * @param a The variable `a` represents the first number for which you want to find the greatest common
 * divisor (GCD).
 * @param b The parameter `b` in the `gcd` function represents the second integer input by the user. It
 * is used in the calculation of the greatest common divisor (GCD) of two numbers `a` and `b` using the
 * Euclidean algorithm.
 *
 * @return The function `gcd` is returning the greatest common divisor (GCD) of the two numbers `a` and
 * `b`.
 */
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}