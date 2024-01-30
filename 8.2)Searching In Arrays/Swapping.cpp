/**
 * This C++ program swaps the values of two variables using a temporary variable.
 * 
 * @return The program is returning 0.
 */
#include <iostream>
using namespace std;
int main()
{
    int x, y, temp;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    cout << "Before swapping" << endl;
    cout << "x = " << x << " y = " << y << endl;
    temp = y; // temp = 5
    y = x;    // y=4(x Value)
    x = temp; // x = 5(temp Value)
    cout << "After swapping" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}