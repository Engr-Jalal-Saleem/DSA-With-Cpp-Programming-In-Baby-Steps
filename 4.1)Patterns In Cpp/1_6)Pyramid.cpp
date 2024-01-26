
/**
 * This C++ program prints a pattern of stars in a pyramid shape based on the number of rows entered by
 * the user.
 *
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}