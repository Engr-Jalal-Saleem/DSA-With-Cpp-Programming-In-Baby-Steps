#include<iostream>
using namespace std;
int main(){
    char arr[100] = "Hello, World!";
    int i = 0;
    cout<<arr<<endl;
    while (arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    
    return 0;
}