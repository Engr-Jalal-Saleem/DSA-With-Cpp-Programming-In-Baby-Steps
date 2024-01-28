/**
 * The above C++ code prints Pascal's triangle up to a given number of rows.
 *
 * @param n The variable `n` represents the number of rows in the Pascal's triangle that you want to
 * print.
 *
 * @return The main function returns an integer value of 0. The factorial function returns a long long
 * integer value, which is the factorial of the input number.
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
    cout << "Enter the number of rows:" << endl;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}