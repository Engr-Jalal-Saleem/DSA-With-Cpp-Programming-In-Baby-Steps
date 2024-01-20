#include <iostream> // Include the header file for input/output operations.
using namespace std;
int main()
{
    int a;  // Decleration
    a = 45; // Initialization
    // Now We Will Find Data Types Memory Allocation
    cout << "Size of Integer:" << sizeof(a) << endl;
    float b;
    cout << "Size of FLoat:" << sizeof(b) << endl;
    char c;
    cout << "Size of Char:" << sizeof(c) << endl;
    bool t;
    cout << "Size of Bool:" << sizeof(t) << endl;
    long int li;
    cout << "Size of Long Integer:" << sizeof(li) << endl;
    short int si;
    cout << "Size of Short Integer:" << sizeof(si) << endl;
    return 0;
}