#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];
    cout << "Enter key: " << endl;
    int key;
    cin >> key;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {   cout<<arr[i]<<endl;
        if (arr[i] == key)
        {
            cout << "Key found at index : " << i << endl;
            break;
        }
        if (i == (n - 1))
        {
            cout << "Key not found " << endl;
        }
    }
}