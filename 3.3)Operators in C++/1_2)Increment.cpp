/**
 * The program calculates the value of c using various arithmetic operations and outputs the result
 * along with the values of a and b.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;
int main(){
    //Another example
    int a=1;
    int b=2;
    int c;
    c = a +b + a++ + b++ + ++a + ++b;
    cout<<c<<endl;
    cout<<a<<" "<<b<<" "<<" "<<endl;
    return 0;
}
// Output:
// 12
// 4 5
// The output is 12 because:
// a +b + a++ + b++ + ++a + ++b
// 1 + 2 + 1 + 2 + 4 + 5 = 12
