/**
 * This C++ program takes two strings as input and finds the index of the second string within the
 * first string.
 * 
 * @return The program is returning the index at which the second string `str1` is found within the
 * first string `str`. If the second string is not found within the first string, the program will
 * return a value of `string::npos`, which is a constant representing the largest possible value of
 * size_t (typically the maximum value representable by the data type).
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, str1;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "Enter the string you want to find: " << endl;
    getline(cin, str1);
    cout << "The string is found at index: " << str.find(str1) << endl;
    return 0;
}   