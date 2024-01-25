/**
 * This C++ program demonstrates the use of assignment operators to assign values to variables and
 * perform arithmetic operations.
 * 
 * @return The program is returning 0.
 */
#include<iostream>
using namespace std;
int main(){
    //Let's see how assignment operators work in C++
    int a=10;
    int b=20;
    //Assignment operators are used to assign values to variables
    //The following table shows the assignment operators in C++:
    //Operator	Meaning
    //=	Assign
    //+=	Add and assign
    //-=	Subtract and assign
    //*=	Multiply and assign
    ///=	Divide and assign
    //%=	Modulus and assign
    //The following table shows the output of assignment operators:
    //Operator	Example	Output
    //=	a=b	20
    //+=	a+=b	30
    //-=	a-=b	10
    //*=	a*=b	200
    ///=	a/=b	0
    //%=	a%=b	10
    cout<<(a=b)<<endl;
    cout<<(a+=b)<<endl;
    cout<<(a-=b)<<endl;
    cout<<(a*=b)<<endl;
    cout<<(a/=b)<<endl;
    cout<<(a%=b)<<endl;

    return 0;
}