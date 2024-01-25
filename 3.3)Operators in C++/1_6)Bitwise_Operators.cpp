#include<iostream>
using namespace std;
int main(){
    //Let's see how bitwise operators work in C++
    int a=10;
    int b=20;
    //Bitwise operators are used to perform operations on individual bits
    //The output of bitwise operators is always an integer value
    //The following table shows the bitwise operators in C++:
    //Operator	Meaning
    //&	AND
    //|	OR
    //^	XOR
    //~	NOT
    //<<	Left shift
    //>>	Right shift
    //The following table shows the output of bitwise operators:
    //Operator	Example	Output
    //&	(a&b)	0
    //|	(a|b)	30
    //^	(a^b)	30
    //~	(~a)	-11
    //<<	(a<<2)	40
    //>>	(a>>2)	2
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a<<2)<<endl;
    cout<<(a>>2)<<endl;
    
    return 0;

}