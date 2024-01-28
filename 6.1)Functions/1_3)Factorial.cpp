/**
 * The above C++ code calculates the factorial of a given number.
 *
 * @param n The variable `n` is an integer that represents the number for which we want to calculate
 * the factorial.
 *
 * @return The factorial of the given number is being returned.
 */
#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "The factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
