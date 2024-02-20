/**
 * This C++ program takes a string input from the user, sorts the characters in the string, and then
 * outputs the sorted string.
 * 
 * @return The program returns 0, which is the standard return value for a C++ program indicating
 * successful execution.
 */
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    sort(str.begin(), str.end());
    cout << "The sorted string is: " << str << endl;
    
    return 0;
}