#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int num;
    cout << "Enter Number(s):" << endl;
    cin >> num;
    int sum = 0;
    int original_num = num;
    while (num > 0)
    {
        int last_digit = num % 10;
        sum += pow(last_digit, 3);
        num /= 10;
    }
    if (sum == original_num)
    {
        cout << "Given Number is Armstrong Number!" << endl;
    }
    else
    {
        cout << "Given Number is not Armstrong Number!" << endl;
    }
    return 0;
}