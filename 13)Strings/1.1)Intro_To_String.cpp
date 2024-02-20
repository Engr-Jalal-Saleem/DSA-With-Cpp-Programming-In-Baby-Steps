#include <iostream>
#include <string>
using namespace std;
int main()
{
    /* This code snippet in C++ is prompting the user to enter a string, reading the input string from
    the user, and then displaying the entered string back to the user. Here's a breakdown of what
    each line does: */
    /*string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    cout << "The string is: " << str << endl;
    */
    
    //Another way to declare and initialize a string in C++ is as follows:
    /* The code snippet `string str; string str1(5,'j'); cout << "The string is: " << str1 << endl;` in
    C++ is declaring two string variables `str` and `str1`. */
    /*string str;
    string str1(5,'j');
    cout << "The string is: " << str1 << endl;
    */

    //Another way to declare and initialize a string in C++ is as follows:
    // string str = "Engr. Jalal Saleem";
    string str;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    // cout << "The string is: " << str << endl;

    
    return 0;
}
