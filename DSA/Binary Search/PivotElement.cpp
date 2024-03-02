# include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
} 

int main(){
    cout<< "Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[1000];
    cout<<"Enter elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > arr[i+1])
    //     {
    //         cout<<"Pivot element is: "<< arr[i+1]<<endl;
    //         break;
    //     }
    // } --> this is the linear search approach and has T.C. of O(n);

    cout<< "Pivot is : "<< getPivot(arr , n) << endl;

    return 0;
}

