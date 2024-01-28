/**
 * The above C++ code takes a range of numbers as input and prints all the prime numbers within that
 * range.
 * 
 * @param num The parameter "num" in the function "isPrime" represents the number that is being checked
 * for primality.
 * 
 * @return The program is returning 0, which indicates that the program executed successfully.
 */
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int num1,num2;
    cout<<"Enter Range of  Numbers:"<<endl;
    cin>>num1>>num2;
    cout<<"Prime Numbers Are:"<<endl;
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}