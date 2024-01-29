/**
 * This C++ program initializes an array with values, prints the values, prompts the user to enter the
 * size of another array, takes input for the elements of that array, and then prints the values and
 * memory location of the second array.
 * @return The memory location of the array `arr2` is being returned.
 */
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << "Getting input from user!" << endl;
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << "th element" << endl;
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The value of " << i << "th element is " << arr2[i] << endl;
    }
    cout << "This will return the memory location in your system, where it is:" << arr2 << endl;

    return 0;
}