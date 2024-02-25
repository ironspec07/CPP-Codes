# include <iostream>
using namespace std;
void swapAlt(int arr[], int size){
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
            // int t = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = t;
            swap(arr[i],arr[i+1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< endl;
    }
}
int main(){
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int arr[100];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<< endl;
    swapAlt(arr,n);
}