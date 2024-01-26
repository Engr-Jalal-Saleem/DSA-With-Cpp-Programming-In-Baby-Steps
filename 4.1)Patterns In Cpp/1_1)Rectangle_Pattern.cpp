/**
 * This C++ program prompts the user to enter the number of rows and columns, and then prints a
 * rectangle of asterisks with the specified dimensions.
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}