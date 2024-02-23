#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];

    cout << "Enter elements of array: " << endl;

    int max = INT32_MAX;
    int min = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < max)
        {
            max = arr[i];
        }
        else if (arr[i] > min)
        {
            min = arr[i];
        }
        else
        {
            continue;
        }
    }
    cout << "Min Element: " << max << endl;
    cout << "Max Element: " << min << endl;
}