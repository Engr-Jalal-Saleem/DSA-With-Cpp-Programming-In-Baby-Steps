#include <iostream>
using namespace std;
// In this program we will be sorting an array using bubble sort
// Bubble sort is a sorting algorithm that works on a unsorted array
// Bubble sort is a very inefficient algorithm as compared to selection sort and insertion sort
// Bubble sort is a stable algorithm
// Bubble sort is an in-place algorithm
// Bubble sort is a quadratic algorithm
// Time complexity of bubble sort is O(n^2)
// Space complexity of bubble sort is O(1)

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Bubble sort algorithm
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}