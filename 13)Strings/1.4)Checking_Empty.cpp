/**
 * This C++ program prompts the user to enter a string and then checks if the string is empty or not.
 * 
 * @return The program will return 0, which indicates successful execution.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    if(str.empty())
        cout<<"The string is empty"<<endl;
    else
        cout<<"The string is not empty"<<endl;
    return 0;
}