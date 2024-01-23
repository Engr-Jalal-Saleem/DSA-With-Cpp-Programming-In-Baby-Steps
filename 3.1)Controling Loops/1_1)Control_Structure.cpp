/**
 * This C++ program prints numbers from 0 to 100, excluding multiples of 3, and stops printing when it
 * reaches 51 or 92.
 *
 * @return The main function is returning an integer value of 0.
 */
// Telling about the break and continue statements
//  The break statement is used to terminate the loop or switch statement and transfer execution to the statement immediately following the loop or switch.
//  The continue statement is used to skip the current iteration of the loop and the control flow of the program goes to the next iteration.
//  The break and continue statements can be used in any of the loop control structures.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
        if (i == 51)
        {
            break;
        }
        if (i == 92)
        {
            break;
        }
    }
    return 0;
}