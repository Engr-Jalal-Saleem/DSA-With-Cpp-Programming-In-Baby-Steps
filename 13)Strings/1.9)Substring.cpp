/**
 * This C++ program takes a string input, asks for a starting index and length, and then outputs the
 * substring based on the given parameters.
 * 
 * @return The program returns 0, which is the standard way for a C++ program to indicate successful
 * completion.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int start, len;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "Enter the starting index: " << endl;
    cin >> start;
    cout << "Enter the length of the substring: " << endl;
    cin >> len;
    cout << "The substring is: " << str.substr(start, len) << endl;

    return 0;
}