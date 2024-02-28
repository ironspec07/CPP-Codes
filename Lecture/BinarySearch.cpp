#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // int mid = (start+end)/2; // here a value can come which is out of range of int .

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part of array.
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // go to left part of array.
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];
    cout << "Enter elements of array in ascending order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key: " << endl;
    int key;
    cin >> key;
    int index = binarySearch(arr, n, key);
    if (index == -1)
    {
        cout << "Key not found." << endl;
    }
    else
    {
        cout << "Key found at index : " << index << endl;
    }
}