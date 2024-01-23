/**
 * This C++ program takes two numbers and an operator from the user and performs the corresponding
 * arithmetic operation.
 * we will use switch case statements to perform the operations
 * @return The program is returning 0.
 */
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers to perform calculations: "<<endl;
    cin>>num1>>num2;
    cout<<"Entered Numbers: "<<num1<<" and "<<num2<<endl;
    cout<<"Enter the operation you want to perform: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Remainder"<<endl;
    char op;
    cin>>op;
    cout<<"Entered Operation: "<<op<<endl;

    switch (op)
    {
    {
    case '+':
        cout<<"Addition of "<<num1<<" and "<<num2<<" is = "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
        break;
    case '%':
        cout<<"Remainder of "<<num1<<" and "<<num2<<" is "<<num1%num2<<endl;
        break;
    }
    
    default:
        cout<<"Sorry! I don't know this operation. Please choose Correct Operator!"<<endl;
        break;
    }
    return 0;

}