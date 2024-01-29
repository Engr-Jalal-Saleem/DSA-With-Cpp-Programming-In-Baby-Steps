/**
 * The above code implements the linear search algorithm in C++ to search for a key in an array.
 * 
 * @param arr The array in which you want to search for the key.
 * @param n The size of the array
 * @param key The key is the element that you want to search for in the array.
 * 
 * @return The LinearSearch function returns the index of the key if it is found in the array, and -1
 * if the key is not found.
 */
#include<iostream>
using namespace std;
// Linear Search
//Linear Search is a searching algorithm that searches for an element in an array one by one.
//Time Complexity: O(n)
//Space Complexity: O(1)
int LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Return -1 if key is not found
}
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
    int key;
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
    cout<<"The key is found at index "<<LinearSearch(arr,n,key)<<endl;

    return 0;
}