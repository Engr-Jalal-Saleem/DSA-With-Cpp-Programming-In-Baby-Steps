#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str1, str2;
    cout << "Enter a string1: " << endl;
    getline(cin, str1);
    cout << "Enter a string2: " << endl;
    getline(cin, str2);
    // str = str1 + str2; // One way to concatenate two strings
    str = str1.append(str2); // Another way to concatenate two strings
    cout << "The string is: " << str << endl;

    //Accessing the characters of a string
    cout << "The first character of the string is: " << str[0] << endl;
    cout << "The second character of the string is: " << str[1] << endl; // and so on
    cout << "The last character of the string is: " << str[str.length() - 1] << endl;
    
    // Clear Function
    str.clear(); // This will clear the string
    cout << "The string is: " << str << endl;
    return 0;
}