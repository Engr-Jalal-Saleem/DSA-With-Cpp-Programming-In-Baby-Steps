/**
 * The given C++ program implements the Sieve of Eratosthenes algorithm to find and print all prime
 * numbers up to a given input number.
 *
 * @param n The code you provided is a C++ program that implements the Sieve of Eratosthenes algorithm
 * to find all prime numbers up to a given number 'n'. The function `prime_seive` generates the prime
 * numbers using the algorithm and then prints them.
 */
#include <iostream>
using namespace std;
void prime_seive(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " " << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    prime_seive(n);

    return 0;
}