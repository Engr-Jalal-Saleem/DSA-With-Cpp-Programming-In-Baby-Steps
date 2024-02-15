#include<iostream>
using namespace std;
/**
 * The main function is the entry point of the program.
 * It prompts the user to enter the number of rows and columns for a 2D array.
 * Then, it takes input for the elements of the array.
 * After that, it displays the elements of the array.
 * Finally, it prompts the user to enter an element to be searched and performs the search operation.
 * If the element is found, it prints the position of the element.
 * If the element is not found, it prints a message indicating that the element is not found.
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
    int x;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]==x)
            {
                cout<<"Element found at ("<<i<<","<<j<<")"<<endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}