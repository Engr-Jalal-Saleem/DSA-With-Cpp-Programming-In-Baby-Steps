/**
 * This C++ program takes a number as input and prints it until a negative number is entered.
 *
 * @return The main function is returning an integer value of 0.
 */

// Tell about the do while loop
// The do while loop is similar to the while loop with the only difference that the condition is checked at the end of the loop.
// This means that the loop will always be executed at least once, even if the condition is false.
// The syntax of the do while loop is as follows:
// do {
//     // code block to be executed
// } while (condition);
// The do while loop is used when you want to execute the code block at least once, and then repeat the loop while the specified condition is true.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    cout << "Entered Number Is: " << num << endl;
    do
    {
        cout << num << endl;
        cin >> num;
    } while (num > 0);

    return 0;
}