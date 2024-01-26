/**
 * This C++ program prints a pattern of numbers in a triangular shape based on the number of rows
 * entered by the user.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}