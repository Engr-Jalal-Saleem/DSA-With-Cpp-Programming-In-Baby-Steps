/**
 * This C++ program takes user input for savings and suggests different travel destinations based on
 * the amount saved.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"Enter Your Savings: ";
    cin>>savings;
    if (savings>10000)
    {
        cout<<"You Can Go On A World Tour!"<<endl;
    }
    else if (savings>5000)
    {
        cout<<"You Can Go On A Trip To Thailand!"<<endl;
    }
    else if (savings>1000)
    {
        cout<<"You Can Go On A Trip To Hunza!"<<endl;
    }
    else if (savings<300)
    {
        cout<<"You Should Stay in Home!"<<endl;
    }
    else
    {
        cout<<"You Can Go On A Trip To Lahore!"<<endl;
    }

    return 0;
}