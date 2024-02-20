/**
 * This C++ program allows the user to input a string, another string to insert, and an index to insert
 * the second string into the first one.
 * 
 * @return The program returns 0, which indicates successful execution.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, str1;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "Enter the string you want to insert: " << endl;
    getline(cin, str1);
    cout << "Enter the index at which you want to insert the string: " << endl;
    int ind;
    cin >> ind;
    str.insert(ind, str1);
    cout << "The string after inserting is: " << str << endl;
    
    return 0;
}