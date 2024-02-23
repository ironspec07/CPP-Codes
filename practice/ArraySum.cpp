#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];
    int sum = 0;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum of elements of given array is : " << sum << endl;
}