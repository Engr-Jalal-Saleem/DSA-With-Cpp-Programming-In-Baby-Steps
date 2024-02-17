/**
 * This C++ program takes user input for a 2D array, prints the original array, and then prints the
 * transposed array.
 * @return The program returns an integer value of 0, which indicates that the program executed
 * successfully without any errors.
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
    /* The code snippet you provided is responsible for transposing a 2D array. Here's a breakdown of
    what it does: */
    cout<<"The original array is: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    /* This part of the code is responsible for printing the transposed array. It iterates over the
    transposed array and prints each element along with a space. After printing all elements in a
    row, it adds a new line to move to the next row in the output. This loop structure ensures that
    the transposed array is displayed in a readable format with rows and columns properly separated. */
    cout<<"The transposed array is: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}