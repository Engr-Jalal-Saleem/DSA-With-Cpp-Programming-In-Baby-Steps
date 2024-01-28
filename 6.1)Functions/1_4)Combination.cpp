/**
 * This C++ program calculates the value of nCr (combination) using the factorial function.
 *
 * @param n The value of n represents the total number of items or elements in a set.
 *
 * @return The function `fact` is returning the factorial of the input number `n`.
 */
#include <iostream>
using namespace std;
long long fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r:" << endl;
    cin >> n >> r;
    int nCr = fact(n) / (fact(r) * fact(n - r));
    cout << "The value of nCr is:" << nCr << endl;

    return 0;
}