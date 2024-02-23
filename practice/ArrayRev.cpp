#include<iostream>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {

    cout << " " << endl;    
    for(int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main() {
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);
    printArray(arr, n);

    return 0;
}