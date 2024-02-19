#include<iostream>
using namespace std;

inline int sum (int a,int b){
    return (a+b);
}

int main()
{   
    int a;
    cout << "enter first number: ";
    cin >>  a;
    int b;
    cout << "enter second number: ";
    cin >> b; 
    cout << "Sum of given two nos. is: " << sum(a,b)<<endl;
    return 0;
}
