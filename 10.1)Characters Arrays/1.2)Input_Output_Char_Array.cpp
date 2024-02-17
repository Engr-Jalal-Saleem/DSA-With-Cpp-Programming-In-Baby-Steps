/**
 * The program reads a string input from the user, displays the entered string, and then prints each
 * individual character of the string on a new line.
 * 
 * @return The program returns an integer value of 0, which indicates successful execution of the
 * program.
 */
#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter a string: ";
    cin>>arr;
    cout<<"The entered string is: "<<arr<<endl;
    cout<<"The individual characters of the string are: "<<endl;
    // cout<<arr[0]<<endl;
    int i = 0;
    while (arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}