/**
 * The given C++ program calculates and prints the prime factors of a given number.
 *
 * @param n The given code is a C++ program that finds and prints the prime factors of a given number.
 * The function `prime_factor` calculates the smallest prime factor for each number up to the given
 * number 'n' using the Sieve of Eratosthenes algorithm.
 */

#include <iostream>
using namespace std;

void prime_factor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j++)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    prime_factor(n);
    return 0;
}