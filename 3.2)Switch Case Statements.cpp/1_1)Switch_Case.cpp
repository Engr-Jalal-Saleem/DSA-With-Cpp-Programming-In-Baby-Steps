/**
 * This C++ program takes an alphabet as input and greets the user in different languages based on the
 * input.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter an alphabet: ";
    cin>>alpha;
    cout<<"Entered alphabet: "<<alpha<<endl;
    //now we will use if-else case statements to greet also tell the language of greeting message
    // if (alpha=='a')
    // {
    //     cout<<"Assallam o Alaikum! in Muslims"<<endl;
    // }
    // if (alpha=='b')
    // {
    //     cout<<"Bonjour! in French"<<endl;
    // }
    // if (alpha=='c')
    // {
    //     cout<<"Ciao! in Italian"<<endl;
    // }
    // if (alpha=='d')
    // {
    //     cout<<"Dobryj den! in Russian"<<endl;
    // }
    // if (alpha=='e')
    // {
    //     cout<<"Eid Mubarak! this is a muslim greeting on Eid"<<endl;
    // }
    // if (alpha=='f')
    // {
    //     cout<<"Feliz Navidad! this is a greeting on Christmas"<<endl;
    // }
    // else
    // {
    //     cout<<"Sorry! I don't know this language\nI am trying to learn....."<<endl;
    // }
// now we will use switch case statements to greet also tell the language of greeting message
    switch (alpha)
    {
    case 'a':
        cout<<"Assallam o Alaikum! in Muslims"<<endl;
        break;
    case 'b':
        cout<<"Bonjour! in French"<<endl;
        break;
    case 'c':
        cout<<"Ciao! in Italian"<<endl;
        break;
    case 'd':
        cout<<"Dobryj den! in Russian"<<endl;
        break;
    case 'e':
        cout<<"Eid Mubarak! this is a muslim greeting on Eid"<<endl;
        break;
    case 'f':
        cout<<"Feliz Navidad! this is a greeting on Christmas"<<endl;
        break;
    default:
        cout<<"Sorry! I don't know this language\nI am trying to learn....."<<endl;
        break;
    }

/*
Telling About the differnce between if-else and switch case statements

if-else statements are used when we have to check multiple conditions
switch case statements are used when we have to check only one condition
if-else statements are used when we have to check multiple conditions and also have to perform different tasks for each condition
switch case statements are used when we have to check only one condition and also have to perform different tasks for each condition
if-else statements are used when we have to check multiple conditions and also have to perform same task for each condition
switch case statements are used when we have to check only one condition and also have to perform same task for each condition
if-else statements are used when we have to check multiple conditions and also have to perform different tasks for each condition and also have to perform a task for all conditions
switch case statements are used when we have to check only one condition and also have to perform different tasks for each condition and also have to perform a task for all conditions
*/

    return 0;
}