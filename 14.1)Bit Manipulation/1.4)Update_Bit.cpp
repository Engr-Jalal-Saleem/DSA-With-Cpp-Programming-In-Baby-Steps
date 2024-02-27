/**
 * The above C++ program demonstrates functions to get, set, clear, and update bits at specific
 * positions in an integer.
 *
 * @param n The variable `n` in the code represents an integer number on which bitwise operations are
 * performed. You can input any integer value for `n` when running the program.
 * @param pos The `pos` parameter in the functions `getBit`, `setBit`, `clearBit`, and `updatebit`
 * represents the position of the bit within the binary representation of the number `n`. It is used to
 * specify which bit operation (get, set, clear, or update) should
 *
 * @return The code is returning the result of setting a bit in a given number.
 */

#include <iostream>
#include <bitset>
#include <cmath>
#include <climits>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
int main()
{
    int n1, pos1, n2, pos2;
    int n3, pos3;
    int n4, pos4, value;
    cout << "Enter the number and position to get the bit: " << endl;
    cin >> n1 >> pos1;
    cout << "Enter the number and position to set the bit: " << endl;
    cin >> n2 >> pos2;
    cout << bitset<8>(n1) << endl;
    cout << bitset<8>(n2) << endl;
    cout << bitset<8>(setBit(n2, pos2)) << endl;
    cout << getBit(n1, pos1) << endl;
    cout << setBit(n2, pos2) << endl;
    // cout << "Enter the number and position to clear the bit: " << endl;
    // cin >> n3 >> pos3;
    // cout << bitset<8>(clearBit(n3, pos3)) << endl;
    cout << "Enter the number, position, and value to update the bit: " << endl;
    cin >> n3 >> pos3 >> n2;
    cout << bitset<8>(updatebit(n4, pos4, value)) << endl;
    //this program may not work on directly on terminal
    cin.ignore();

    return 0;
}