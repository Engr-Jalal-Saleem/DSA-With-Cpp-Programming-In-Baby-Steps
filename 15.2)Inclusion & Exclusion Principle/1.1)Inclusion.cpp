/**
 * The function calculates the count of numbers divisible by either a or b within a given range.
 *
 * @param n The parameter `n` represents the number for which you want to find the count of numbers
 * divisible by either `a` or `b`.
 * @param a The parameter 'a' in the 'divisible' function represents the first number you want to check
 * divisibility with. It is used to calculate how many times 'a' divides 'n'.
 * @param b The parameter `b` in the `divisible` function represents the second number that you want to
 * check divisibility with. It is one of the two numbers entered by the user in the `main` function.
 *
 * @return The function `divisible` is returning the count of numbers from 1 to n that are divisible by
 * either a or b.
 */
#include <iostream>
using namespace std;
int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);
    return c1 + c2 - c3;
}
int main()
{
    int n, a, b;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;
    cout << divisible(n, a, b) << endl;

    return 0;
}