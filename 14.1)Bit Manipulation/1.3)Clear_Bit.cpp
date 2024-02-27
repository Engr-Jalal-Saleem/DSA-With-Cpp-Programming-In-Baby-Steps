/**
 * The C++ program defines functions to get, set, and clear a specific bit at a given position in an
 * integer.
 *
 * @param n The parameter `n` in the code represents the integer number for which you want to perform
 * bit manipulation operations like getting, setting, or clearing a specific bit at a given position.
 * @param pos The `pos` parameter in the functions `getBit`, `setBit`, and `clearBit` represents the
 * position of the bit within the binary representation of the number `n`. It is used to specify which
 * bit operation (get, set, clear) should be performed at that particular position in
 *
 * @return The `clearBit` function is being called with the input number `n2` and position `pos2`. The
 * function `clearBit` clears the bit at the specified position in the number by creating a mask with a
 * 0 at that position and 1s everywhere else, and then performing a bitwise AND operation with the
 * original number to clear the bit.
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

int main()
{
    int n3, pos3;
    // int n1, pos1, n2, pos2;
    // cout << "Enter the number and position to get the bit: " << endl;
    // cin >> n1 >> pos1;
    // cout << "Enter the number and position to set the bit: " << endl;
    // cin >> n2 >> pos2;
    // cout<<bitset<8>(n1)<<endl;
    // cout<<bitset<8>(n2)<<endl;
    // cout<<bitset<8>(setBit(n2,pos2))<<endl;
    // cout<<getBit(n1,pos1)<<endl;
    // cout<<setBit(n2,pos2)<<endl;
    cout << "Enter the number and position to clear the bit: " << endl;
    cin >> n3 >> pos3;
    cout << bitset<8>(clearBit(n3, pos3)) << endl;

    return 0;
}