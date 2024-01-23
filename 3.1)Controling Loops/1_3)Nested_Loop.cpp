#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter a range of numbers to check prime numbers: "<<endl;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Entered Range: "<<num1<<" to "<<num2<<endl;
    int i,j;
    for (i = num1; i <= num2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                cout<<"By the way "<<i<<" is not a prime number"<<endl;
                break;
            }
        }
        if (j==i)
        {
            cout<<i<<" is a prime number"<<endl;
        }
    }



    return 0;
}