#include <iostream>
using namespace std;
/**
 * The main function is the entry point of the program.
 * It prompts the user to enter the number of rows and columns for a 2D array,
 * then takes input for the elements of the array.
 * Finally, it prints the elements of the array.
 * 
 * @return 0 indicating successful execution of the program.
 */
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n >> m;
    int a[n][m];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}