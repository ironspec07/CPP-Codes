// Write a program to find the sum of n natural numbers.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number till which you want sum" << endl;
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum of desired natural numbers is :- " << sum;
    return 0;
}