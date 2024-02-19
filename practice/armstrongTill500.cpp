// Write a program to print all Armstrong numbers between 100 to 500.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <iostream>
using namespace std;
int main()
{
    cout << "Armstrong numbers between 1 to 500 are :- " << endl;
   
    int sum = 0;
   
    for (int i = 1; i <= 500; i++)
    {
        int temp = i;

        while (i != 0)
        {
            int a = i % 10;
            sum = sum + (a * a * a);
            i = i / 10;
        }
        if (temp == sum)
        {
            cout << i;
        }
    }
    return 0;
}
