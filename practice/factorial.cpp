// Write a program to calculate the factorial of a number.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number to calculate factorial" << endl;
    int n;
    int factorial = 1;
    cin >> n;
    if (n != 0 && n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout << "factorial is :- " << factorial;
    }
    else if (n == 1)
    {
        cout << "factorial is :- 1";
    }
    else
    {
        cout << "factorial is :- 1";
    }
    return 0;
}