#include<iostream>
using namespace std;
//In this program we will be sorting an array using insertion sort
//Insertion sort is a sorting algorithm that works on a unsorted array
//Insertion sort is a very efficient algorithm as compared to bubble sort and selection sort
//Insertion sort is a stable algorithm
//Insertion sort is an in-place algorithm
//Insertion sort is a quadratic algorithm
//Time complexity of insertion sort is O(n^2)
//Space complexity of insertion sort is O(1)

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
    //Insertion sort algorithm
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"The sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}