/**
 * The above C++ program takes input for two matrices, multiplies them, and outputs the resultant
 * matrix.
 * @return The main function in the code snippet returns an integer value of 0. This is a common
 * practice in C++ programs to indicate that the program executed successfully without any errors.
 */
#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    int arr1[row1][col1], arr2[row2][col2];
    int res[row1][col2];
    cout << "Enter the number of rows and columns for the first matrix: "<<endl;
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns for the second matrix: "<<endl;
    cin >> row2 >> col2;
    cout << "Enter the elements of the first matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "The resultant matrix is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}