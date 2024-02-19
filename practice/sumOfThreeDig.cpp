//write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
    int n=123;
    int third= n%10;
    cout<<third<<endl;
    int second =n%100;
    second /= 10;
    cout<<second<<endl;
    int first =n/100;
    cout<<first<<endl;
    cout<<"sum of digits = "<<(first+second+third)<<endl;
    return 0;
}