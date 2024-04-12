// Write a program to print all Armstrong numbers between 100 to 500.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number to check for armstrong or not" << endl;
    int n;
    int sum = 0;
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        int a = n % 10;
        sum = sum + (a*a*a);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
    return 0;
}
