/**
 * This C++ program checks if a given string is a palindrome or not.
 *
 * @return The program returns 0, which indicates successful execution and termination of the program.
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    char arr[n + 1];
    cout << "Enter the string: ";
    cin >> arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}