/**
 * The above C++ program takes user input for a 2D array, searches for a specific element in the array
 * using a specific algorithm, and outputs the result of the search.
 * 
 * @return The program returns an integer value of 0 at the end of the main function, which indicates
 * successful execution of the program.
 */
#include<iostream>
using namespace std;
int main(){
    int rows, col;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>col;
    int arr[rows][col];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The original array is: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to be searched: "<<endl;
    int target; cin >> target;
    int r = 0, c = col - 1;
    bool found = false;
    while (r < rows && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
            break;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found at (" << r << "," << c << ")" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}