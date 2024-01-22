/**
 * This C++ program takes a number as input and prints it until the user enters a non-positive number.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    cout<<"Entered Number Is: "<<num<<endl;
    while (num>0)
    {
        cout<<num<<endl;
        cin>>num;
    }

    return 0;
}