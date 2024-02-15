/**
 * This C++ program demonstrates the use of pointers to store the address of a variable and access its
 * value.
 * 
 * @return The program is returning 0.
 */
#include <iostream>
/**
 * This C++ program demonstrates the use of pointers to store the address of a variable and access its
 * value.
 * @return The program is returning 0.
 */
using namespace std;
int main()
{
    int a = 10;                                          // Declaring a variable a and initializing it with 10.
    int *bptr = &a;                                      // Declaring a pointer bptr and initializing it with the address of a.
    cout << "The value of a is: " << a << endl;          // Printing the value of a.
    cout << "The address of a is: " << &a << endl;       // Printing the address of a.
    cout << "The value of bptr is: " << bptr << endl;    // Printing the value of bptr.
    cout << "The value of *bptr is: " << *bptr << endl;  // Printing the value stored at the address stored in bptr.
    cout << "The address of bptr is: " << &bptr << endl; // Printing the address of bptr.


    // Now we will study pointer to pointer.
    int **cptr = &bptr;                                   // Declaring a pointer to pointer cptr and initializing it with the address of bptr.
    cout << "The value of cptr is: " << cptr << endl;     // Printing the value of cptr.
    cout << "The value of *cptr is: " << *cptr << endl;   // Printing the value stored at the address stored in cptr.
    cout << "The value of **cptr is: " << **cptr << endl; // Printing the value stored at the address stored in the address stored in cptr.
    cout << "The address of cptr is: " << &cptr << endl;  // Printing the address of cptr.


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