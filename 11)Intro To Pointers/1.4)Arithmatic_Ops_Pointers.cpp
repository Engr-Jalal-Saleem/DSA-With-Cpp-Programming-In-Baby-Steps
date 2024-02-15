/**
 * This C++ program demonstrates arithmetic operations on pointers and compares two pointers.
 * 
 * @return The program returns 0, indicating successful execution of the program.
 */
#include<iostream>
using namespace std;
int main(){
    // Declare and initialize the array 'arr'
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    //Now we will study arithmetic operations on pointers.
    int *ptr2 = arr;                                      // Declaring a pointer ptr2 and initializing it with the address of arr.
    cout << "The value of ptr2 is: " << ptr2 << endl;      // Printing the value of ptr2.
    cout << "The value of *ptr2 is: " << *ptr2 << endl;    // Printing the value stored at the address stored in ptr2.
    cout << "The value of *(ptr2+1) is: " << *(ptr2+1) << endl; // Printing the value stored at the address stored in ptr2+1.
    cout << "The value of *(ptr2+2) is: " << *(ptr2+2) << endl; // Printing the value stored at the address stored in ptr2+2.
    cout << "The value of *(ptr2+3) is: " << *(ptr2+3) << endl; // Printing the value stored at the address stored in ptr2+3.
    cout << "The value of *(ptr2+4) is: " << *(ptr2+4) << endl; // Printing the value stored at the address stored in ptr2+4.
    cout << "The value of *(ptr2+5) is: " << *(ptr2+5) << endl; // Printing the value stored at the address stored in ptr2+5.
    cout << "The value of *(ptr2+6) is: " << *(ptr2+6) << endl; // Printing the value stored at the address stored in ptr2+6.
    //Another operation that can be performed on pointers is subtraction.
    cout << "The value of (ptr2+1)-ptr2 is: " << (ptr2+1)-ptr2 << endl; // Printing the value of (ptr2+1)-ptr2.
    cout << "The value of (ptr2+2)-ptr2 is: " << (ptr2+2)-ptr2 << endl; // Printing the value of (ptr2+2)-ptr2.
    //We can also compare two pointers.
    cout << "The value of ptr2<ptr2+1 is: " << (ptr2<ptr2+1) << endl; // Printing the value of ptr2<ptr2+1.
    cout << "The value of ptr2<ptr2+2 is: " << (ptr2<ptr2+2) << endl; // Printing the value of ptr2<ptr2+2.
    cout << "The value of ptr2<ptr2+3 is: " << (ptr2<ptr2+3) << endl; // Printing the value of ptr2<ptr2+3.
    
    return 0;
}
