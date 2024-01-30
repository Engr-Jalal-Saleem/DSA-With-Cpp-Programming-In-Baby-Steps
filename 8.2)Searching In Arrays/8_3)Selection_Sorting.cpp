/**
 * This C++ program sorts an array using the selection sort algorithm.
 * 
 * @return The program is returning 0.
 */
#include<iostream>
using namespace std;
//In this program we will be sorting an array using selection sort
//Selection sort is a sorting algorithm that works on a unsorted array
//Selection sort is a very inefficient algorithm as compared to bubble sort and insertion sort
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //Selection sort algorithm
    for (int  i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
    return 0;
}