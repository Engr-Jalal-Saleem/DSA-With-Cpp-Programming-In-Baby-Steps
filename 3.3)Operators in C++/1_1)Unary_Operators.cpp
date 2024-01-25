/**
 * This C++ program demonstrates the use of post-increment, pre-increment, post-decrement, and
 * pre-decrement operators.
 * Telling the difference between post and pre increment/decrement operators:
 * Post increment/decrement operators are used after the variable name, while pre increment/decrement
 * operators are used before the variable name.
 * @return The program will output the following:
 */
#include<iostream>
using namespace std;
int main(){
    int i=1;
    //This is post increment
    cout<<i++<<endl;
    //This is pre increment
    cout<<++i<<endl;
    //This is post decrement
    cout<<i--<<endl;
    //This is pre decrement
    cout<<--i<<endl;
    return 0;
}