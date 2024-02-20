/**
 * This C++ program compares two strings entered by the user and outputs whether they are equal or not.
 * 
 * @return The program compares two input strings and returns an integer value. If the strings are
 * equal, it returns 0. If the first string is lexicographically less than the second string, it
 * returns a negative value. If the first string is lexicographically greater than the second string,
 * it returns a positive value.
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    cout << "Enter a string1: " << endl;
    getline(cin, str1);
    cout << "Enter a string2: " << endl;
    getline(cin, str2);
    cout<<"The comparison of the strings is: "<<endl;
    cout<<str1.compare(str2)<<endl;
    //Another way to compare the strings is as follows:
    if(str1.compare(str2) == 0) //Or if(str1 == str2) , or if(!str1.compare(str2))
        cout<<"The strings are equal"<<endl;
    else
        cout<<"The strings are not equal"<<endl;
    return 0;
}