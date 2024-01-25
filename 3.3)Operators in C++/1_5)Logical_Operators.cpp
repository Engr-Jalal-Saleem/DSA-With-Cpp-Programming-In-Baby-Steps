#include<iostream>
using namespace std;
int main(){
    //Let's see how logical operators work in C++
    int a=10;
    int b=20;
    //Logical operators are used to combine two or more conditions
    //The output of logical operators is always a boolean value (true or false)
    //The following table shows the logical operators in C++:   
    //Operator	Meaning
    //&&	AND
    //||	OR
    //!	NOT
    //The following table shows the output of logical operators:
    //Operator	Example	Output
    //&&	(a>b && a!=b)	false
    //||	(a>b || a!=b)	true
    //!	!(a>b)	true
    cout<<(a>b && a!=b)<<endl;
    cout<<(a>b || a!=b)<<endl;
    cout<<!(a>b)<<endl;
    return 0;

}