/**
 * This C++ program takes an integer input from the user, converts it to a string, and then outputs the
 * string.
 * 
 * @return The program returns 0, which is the exit status indicating that the program executed
 * successfully.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cout << "Enter an integer: " << endl;
    cin >> x;
    string str = to_string(x);
    cout << "The string is: " << str << endl;
    return 0;
}