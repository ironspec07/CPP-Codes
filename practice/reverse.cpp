// Write a program to reverse a given integer number.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << endl;
    int n;
    string rev = "";
    cin >> n;
    if (n > 9)
    {
        while (n != 0)
        {
            int a = n % 10;
            string a= string to_string (int a);
            rev = rev + a;
            n = n / 10;
        }
        cout << "reverse of number is = " << rev;
    }
    else
    {
        cout << "reverse of number is = " << n;
    }
}