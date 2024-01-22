// Problem Statement: 
// Write a program that asks the user for a number n and prints the sum of the numbers 1 to n

/**
 * @function main
 * @description The main function of the program.
 * @returns {int} 0 indicating successful execution of the program.
 */

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number: ";
    cin >> num;

    if (num >= 1) {
        cout << "The Counting Of All Numbers From 1 To " << num << " is ......" << endl;
        for (int i = 1; i <= num; i++)
        {
            cout << i << endl;
        }
    } else if (num <= -1) {
        cout << "The Counting Of All Numbers From 1 To " << num << " is ......" << endl;
        for (int i = 1; i >= num; i--)
        {
            cout << i << endl;
        }
    } else {
        cout << "The entered number is 0" << endl;
    }

    return 0;
}
