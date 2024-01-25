#include<iostream>
using namespace std;
int main(){
    //Let's see how relational operators work in C++
    int a=10;
    int b=20;
    //Relational operators are used to compare two values
    //The output of relational operators is always a boolean value
    //The following table shows the relational operators in C++:
    //Operator	Meaning
    //==	Equal to
    //!=	Not equal to
    //>	Greater than
    //<	Less than
    //>=	Greater than or equal to
    //<=	Less than or equal to
    //The following table shows the output of relational operators:
    //Operator	Example	Output
    //==	(a==b)	false
    //!=	(a!=b)	true
    //>	(a>b)	false
    //<	(a<b)	true
    //>=	(a>=b)	false
    //<=	(a<=b)	true
    
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;

    return 0;

}