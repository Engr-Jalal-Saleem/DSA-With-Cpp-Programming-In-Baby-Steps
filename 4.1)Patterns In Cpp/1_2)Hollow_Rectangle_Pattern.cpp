/**
 * This C++ program prompts the user to enter the number of rows and columns, and then prints a
 * hollow rectangle of asterisks with the specified dimensions.
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
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}