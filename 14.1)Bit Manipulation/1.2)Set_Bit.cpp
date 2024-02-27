/**
 * The C++ program takes user input for two numbers and positions, displays their binary
 * representations, sets a bit at a specified position, and retrieves a bit at another position.
 * 
 * @param n The code you provided is a C++ program that demonstrates bitwise operations to get and set
 * a specific bit in an integer.
 * @param pos The `pos` parameter in the `getBit` and `setBit` functions represents the position of the
 * bit within the binary representation of the number `n`. It is used to specify which bit you want to
 * get or set within the binary representation of the number.
 * 
 * @return The `getBit` function returns the value of the bit at a specific position in an integer `n`.
 * The `setBit` function returns the integer `n` with the bit at a specific position set to 1.
 */

#include<iostream>
#include<bitset>
#include<cmath>
#include<climits>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos)!= 0);
}
int setBit(int n, int pos){
    return (n | (1<<pos));
}
int main(){
    int n1, pos1, n2, pos2;
    cout<<"Enter the number and position to get the bit: "<<endl;
    cin>>n1>>pos1;
    cout<<"Enter the number and position to set the bit: "<<endl;
    cin>>n2>>pos2;
    /* `cout<<bitset<8>(n1)<<endl;` is displaying the binary representation of the integer `n1` with a
    fixed width of 8 bits using the `std::bitset` class. This line of code converts the integer `n1`
    into its binary representation and displays it on the console output. The `bitset<8>` part
    specifies that the binary representation should be shown with a width of 8 bits, padding with
    leading zeros if necessary. */
    /* `cout<<bitset<8>(n1)<<endl;` is a statement in C++ that is used to print the binary
    representation of the integer `n1` with a fixed width of 8 bits. */
    cout<<bitset<8>(n1)<<endl;
    cout<<bitset<8>(n2)<<endl;
    cout<<bitset<8>(setBit(n2,pos2))<<endl;
    cout<<getBit(n1,pos1)<<endl;
    cout<<setBit(n2,pos2)<<endl;
    return 0;
}