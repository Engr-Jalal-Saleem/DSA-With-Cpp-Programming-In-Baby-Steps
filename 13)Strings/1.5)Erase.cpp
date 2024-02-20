/**
 * This C++ program takes a user-input string, erases a specified number of characters starting from a
 * specified index, and then displays the modified string.
 * 
 * @return The program returns 0, which indicates successful execution.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int ind1, ind2;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "Enter the starting index from where you want to erase: " << endl;
    cin >> ind1;
    cout << "Enter the number of characters you want to erase: " << endl;
    cin >> ind2;
    str.erase(ind1, ind2); // This will erase 2 characters from the 3rd index
    //str.erase(3, 2); // This will erase 2 characters from the 3rd index
    cout << "The string after erasing is: " << str << endl;

    return 0;
}