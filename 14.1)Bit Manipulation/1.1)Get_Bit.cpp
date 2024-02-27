/**
 * The function `getBit` returns the value of a specific bit at a given position in a number.
 * 
 * @param n 5
 * @param pos The `pos` parameter in the `getBit` function represents the position of the bit that you
 * want to retrieve from the integer `n`. For example, if `pos` is 2, it means you want to get the
 * value of the bit at the 2nd position (from right
 * 
 * @return The `getBit` function is returning the value of the bit at the specified position `pos` in
 * the integer `n`. In this case, `getBit(5, 2)` is being called, which means we are checking the value
 * of the bit at position 2 in the binary representation of the number 5.
 */
#include<iostream>
#include<bitset>
#include<cmath>
#include<climits>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos)!= 0);
}
int main(){
    cout<<getBit(5,2)<<endl;
    return 0;
}