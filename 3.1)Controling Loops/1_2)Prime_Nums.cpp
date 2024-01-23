/**
 * This C++ program checks if a given number is prime or not.
 * 
 * @return The program is returning 0.
 */

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Entered Number:"<<num<<endl;
    int i; // Declare the variable "i" outside the for loop
    for (i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            cout<<"ENTERED NUMBER IS NOT A PRIME NUMBER"<<endl;
            break;
        }    
    }
    if (i==num)
    {
        cout<<"ENTERED NUMBER IS A PRIME NUMBER"<<endl;
    }
    return 0;

}