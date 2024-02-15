#include<iostream>
using namespace std;
int main(){
    
    //Now we will study  pointers arrays in arrays.
    int arr[5] = {1, 2, 3, 4, 5};                        // Declaring an array arr of size 5 and initializing it with some values.
    int *ptr[5];                                         // Declaring an array of pointers ptr of size 5.
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];                                 // Storing the address of each element of arr in the corresponding element of ptr.
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of arr[" << i << "] is: " << arr[i] << endl; // Printing the value of arr[i].
        cout << "The address of arr[" << i << "] is: " << &arr[i] << endl; // Printing the address of arr[i].
        cout << "The value of ptr[" << i << "] is: " << ptr[i] << endl; // Printing the value of ptr[i].
        cout << "The value of *ptr[" << i << "] is: " << *ptr[i] << endl; // Printing the value stored at the address stored in ptr[i].
        cout << "The address of ptr[" << i << "] is: " << &ptr[i] << endl; // Printing the address of ptr[i].
    }

    // Now we will study pointer to an array.
    int (*ptr1)[5] = &arr;                                // Declaring a pointer to an array ptr1 and initializing it with the address of arr.
    cout << "The value of ptr1 is: " << ptr1 << endl;      // Printing the value of ptr1.
    cout << "The value of *ptr1 is: " << *ptr1 << endl;    // Printing the value stored at the address stored in ptr1.
    cout << "The value of (*ptr1)[2] is: " << (*ptr1)[2] << endl; // Printing the value stored at the address stored in ptr1.
    cout << "The address of ptr1 is: " << &ptr1 << endl;   // Printing the address of ptr1.
    
    return 0;
}