/*Write a program which takes the values of length and breadth from user and check if it is
a square or not.*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter length and breadth"<<endl;
    double length;
    double breadth;
    cin >> length;
    cin >> breadth;
    if (length == breadth)
    {
        cout << "is square";
    }
    else
        cout << "not a square";
}
