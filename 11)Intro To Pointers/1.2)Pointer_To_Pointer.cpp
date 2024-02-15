#include<iostream>
using namespace std;
int main(){
    int a = 10;                                          // Declaring a variable a and initializing it with 10.
    int *bptr = &a;                                      // Declaring a pointer bptr and initializing it with the address of a.
    // Now we will study pointer to pointer.
    int **cptr = &bptr;                                   // Declaring a pointer to pointer cptr and initializing it with the address of bptr.
    cout << "The value of cptr is: " << cptr << endl;     // Printing the value of cptr.
    cout << "The value of *cptr is: " << *cptr << endl;   // Printing the value stored at the address stored in cptr.
    cout << "The value of **cptr is: " << **cptr << endl; // Printing the value stored at the address stored in the address stored in cptr.
    cout << "The address of cptr is: " << &cptr << endl;  // Printing the address of cptr.

    return 0;
}