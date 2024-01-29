/**
 * This C++ program takes input from the user for the size of an array and its elements, and then finds
 * the largest and smallest elements in the array.
 * 
 * @return The program is returning 0.
 */
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"The value of "<<i<<"th element is "<<arr[i]<<endl;
    }
    //Finding the largest element in the array
    //int maxNo; // Another way to initialize an array is to use the maxNo=INT_MIN; and minNo=INT_MAX; from climits library
    //int minNo; //Here in these varaibles garbage values are stored, so we need to initialize them with some value
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>maxNo)
    //     {
    //         maxNo=arr[i];
    //         cout<<"The largest element in the array is "<<maxNo<<endl;
    //     }
    //     if (arr[i]<minNo)
    //     {
    //         minNo=arr[i];
    //         cout<<"The smallest element in the array is "<<minNo<<endl;
    //     }
    // }
    // Another way to initialize an array is to use the maxNo=INT_MIN; and minNo=INT_MAX; from climits library
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for (int i = 0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"The largest element in the array is "<<maxNo<<endl;
    cout<<"The smallest element in the array is "<<minNo<<endl;
    return 0;
}