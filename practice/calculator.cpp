// Design a calculator to perform basic arithmetic operations (+,-,/,*)
#include <iostream>
using namespace std;
int main()
{
    cout << "enter two numbers and a operator " << endl;
    double a;
    double b;
    char o;
    cin >> a;
    cin >> b;
    cin >> o;
    switch (o)
    {
    case '+':
        cout << "sum is = " << (a + b) << endl;
        break;
    case '-':
        cout << "difference is = " << (a - b) << endl;
        break;
    case '*':
        cout << "product is = " << (a * b) << endl;
        break;
    case '/':
    {
        if (b == 0)
        {
            cout << ("math error");
        }
        else
        {
            cout << "quotient is = " << (a / b) << endl;
        }
        break;
    }
    case '%':
    {
        if (b == 0)
        {
            cout << ("math error") << endl;
        }
        else
        {
            cout << "remainder is = " << (a % b) << endl;
        }
        break;
    }
    }
}