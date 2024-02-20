/**
 * This C++ program prompts the user to enter a string, reads the input, and then displays the entered
 * string along with its length.
 * 
 * @return The program returns 0, which indicates successful execution.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "The length of the string is: " << str.length() << endl;

    return 0;
}