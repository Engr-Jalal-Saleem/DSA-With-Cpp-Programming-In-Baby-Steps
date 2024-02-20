/**
 * This C++ program reads a string input from the user, converts it to an integer using stoi, and then
 * displays the integer.
 * 
 * @return The program is returning an integer value.
 */
#include<iostream>
#include<string>

using namespace std;
int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    int x = stoi(str);
    cout << "The integer is: " << x << endl;

    return 0;
}