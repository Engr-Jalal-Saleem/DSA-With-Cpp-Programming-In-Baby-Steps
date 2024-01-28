/**
 * The above code is a C++ program that prints the first n terms of the Fibonacci sequence.
 * 
 * @param n The variable `n` represents the number of terms of the Fibonacci sequence that the user
 * wants to print.
 * 
 * @return In the given code, the function `fibo` does not return any value. It is a void function,
 * which means it does not have a return type.
 */
#include <iostream>
using namespace std;
void fibo(int n){
    int term1 = 0;
    int term2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout<<term1<<endl;
        nextTerm =term1+term2;
        term1 = term2;
        term2 = nextTerm;
    }
    return;
}
int main()
{
    cout << "Enter the number of terms you want to print:" << endl;
    int n;
    cin >> n;
    cout << "The first " << n << " terms of the Fibonacci Sequence are:" << endl;
    fibo(n);
    return 0;
}
