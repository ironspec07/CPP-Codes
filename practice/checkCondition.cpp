/*Write a program to take the values of two variables a and b from the keyboard and then check if both the
 conditions 'a < 50' and 'a < b' are true.*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter two numbers"<<endl;
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<((a<50)&&(a<b))?true:false;
    return 0;
}