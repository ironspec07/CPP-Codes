/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter cost price and selling price" << endl;
    double sp;
    double cp;
    cin >> cp;
    cin >> sp;
    if (sp > cp)
    {
        cout << "profit = " << (sp - cp);
    }
    else if (cp > sp)
    {
        cout << "loss = " << (cp - sp);
    }
    else
        cout << "no profit no loss";
    return 0;
}