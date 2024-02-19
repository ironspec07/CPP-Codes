/*Write a program to calculate marks to grades . Follow the conversion rule as given below :
100 – 90 A+
90 – 80 A
80 – 70 B+
70 – 60 B
60 – 50 C
50 – 40 D
40 – 30 E
30 – 0 F*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter marks" << endl;
    int n;
    cin >> n;
    if (n < 30)
    {
        cout << "grade :- F";
    }
    else if (n > 30 && n < 40)
    {
        cout << "grade :- E";
    }
    else if (n > 40 && n < 50)
    {
        cout << "grade :- D";
    }
    else if (n > 50 && n < 60)
    {
        cout << "grade :- C";
    }
    else if (n > 60 && n < 70)
    {
        cout << "grade :- B";
    }
    else if (n > 70 && n < 80)
    {
        cout << "grade :- B+";
    }
    else if (n > 80 && n < 90)
    {
        cout << "grade :- A";
    }
    else
    {
        cout << "grade :- A+";
    }
}