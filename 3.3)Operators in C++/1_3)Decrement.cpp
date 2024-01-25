/**
 * The code demonstrates the use of increment and decrement operators in C++ and calculates the final
 * value of the variable x.
 * 
 * @return The value being returned is 0.
 */
#include <iostream>
using namespace std;
int main(){
    //Another example
    int x=0;
       //0   //0    //1    //1
    x= x++ - --x + ++x - x--;
    cout<<x<<endl;

// Output:
// 0
// The output is 0 because:
// x++ - --x + ++x - x--
// 0 - 0 + 1 - 1 = 0
// The value of x is 0 because the value of x is incremented and decremented by 1, and then the value
// of x is incremented and decremented by 1 again.  The final value of x is 0.
// The following table shows the values of x at each step:
// Step	Operation	Value of x
// 1	x++	0
// 2	--x	0
// 3	++x	1
// 4	x--	1
// 5	x	0
        //Another example

    int a = 1;
    int b = 2;
    int c = 3;
    int d= a-- - b-- - c--;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
// Output:
// 0 1 2 -4
// The output is 0 1 2 -4 because:
// a-- - b-- - c--
// 1 - 2 - 3 = -4
// The value of a is 0 because the value of a is decremented by 1.  The value of b is 1 because the
// value of b is decremented by 1.  The value of c is 2 because the value of c is decremented by 1.

    return 0;
}