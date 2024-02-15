#include<iostream>
/**
 * This C++ program demonstrates the use of pointers to store the address of a variable and access its
 * value.
 * @return The program is returning 0.
 */
using namespace std;
int main(){
    int a = 10; // Declaring a variable a and initializing it with 10.
    int* bptr = &a; // Declaring a pointer bptr and initializing it with the address of a.
    cout << "The value of a is: " << a << endl; // Printing the value of a.
    cout << "The address of a is: " << &a << endl; // Printing the address of a.
    cout << "The value of bptr is: " << bptr << endl; // Printing the value of bptr.
    cout << "The value of *bptr is: " <<*bptr << endl; // Printing the value stored at the address stored in bptr.
    cout << "The address of bptr is: " << &bptr << endl; // Printing the address of bptr.
    return 0;
}