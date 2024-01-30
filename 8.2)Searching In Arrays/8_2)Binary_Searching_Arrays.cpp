#include<iostream>
using namespace std;
//In this program we will be searching for an element in an array using binary search
//Binary search is a searching algorithm that works on a sorted array
//Binary search is a very efficient algorithm as compared to linear search
//Binary search is a divide and conquer algorithm
//Binary search is a recursive algorithm
//Binary search is a logarithmic algorithm
//Binary search is a very efficient algorithm as compared to linear search
//Time complexity of binary search is O(logn)
//Space complexity of binary search is O(1)

//Binary search algorithm
int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            start= mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    cout<<"The element is found at index "<<BinarySearch(arr,n,key)<<endl;
    return 0;
}