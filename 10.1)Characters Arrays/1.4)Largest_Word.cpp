/**
 * This C++ program reads a string input, finds the longest word in the string, and outputs that word
 * along with its length.
 *
 * @return The program reads a string input from the user, calculates the length of the longest word in
 * the input string, and then outputs the length of the longest word along with the word itself. The
 * program returns 0 at the end of the main function, indicating successful execution.
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cout << "Enter the string: ";
    cin.getline(arr, n + 1);
    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            if (arr[i] == '\0')
            {
                break;
            }
        }
        else
        {
            currLen++;
        }
        i++;
    }
    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;
    return 0;
}
