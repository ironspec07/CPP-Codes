// - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main(){
    int n=12345;
    int first=n/10000;
    cout<<"first number = "<<first<<endl;
    int fourth = n%100;
    fourth /= 10;
    cout<<"second last number = "<<fourth<<endl;
    int sum = first+fourth;
    cout<<"sum of first and second last number = "<<sum<<endl;
    return 0;
}