/**
 * This C++ program calculates the sum of all numbers from 1 to a given input number.
 *
 * @return The program is returning 0.
 */

#include <iostream>

using namespace std;

/**
 * @brief Main function.
 * @return 0 on successful execution.
 */

int main()
{
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    cout << "The Sum Of All Numbers From 1 To " << num << " ......" << endl;

    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "The Sum Of All Numbers From 1 To " << num << " Is: " << sum << endl;

    return 0;
}