//Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;
int main(){
   int a=2;
   int b=3;
   int temp=1;
   temp=a;
   a=b;
   b=temp;
   cout<<a<<endl;
   cout<<b<<endl;
   return 0; 
}