#include <iostream>
using namespace std;

int getNum(){
    int n;
    cin>>n;
    return n;
}

bool checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int power(int a, int b)
{
    int pow = 1;
    for (int i = 1; i <= b; i++)
    {
        pow = pow * a;
    }
    return pow;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n , int r ){
    int ncr ;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
bool isPrime(int n){
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<< "1. Number raised to any power."<<endl;
    cout<< "2. Check Even/Odd."<<endl;
    cout<< "3. Factorial."<<endl;
    cout<< "4. nCr."<<endl;
    cout<< "5. Check for prime."<<endl;
    cout<< "Enter choice: "<<endl;
    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
    {
        cout<<"Enter a number:  "<<endl;
        int a = getNum();
        cout << "Enter power:  " << endl;
        int b = getNum();

        cout << a << " raised to the power " << b << " is: " << power(a, b) << endl;
        break;
    }
    case 2:
    {
        cout << "Enter a number:  " << endl;
        int n = getNum();
        if (checkEvenOdd(n))  
        {
            cout<< "The given number is Even"<<endl;
        }
        else
        {
            cout<< "The given number is Odd"<<endl;
        }
        break;
    }
    case 3:
    {
        cout << "Enter a number:  " << endl;
        int n = getNum();
        cout<<"Factorial of given number is: "<< factorial(n)<<endl;
        break;
    }
    case 4:
    {
        cout << "Enter n:  " << endl;
        int n = getNum();
        cout << "Enter r:  " << endl;
        int r = getNum();
        cout<<"nCr of given number is: "<< nCr(n,r)<<endl;
        break;
    }
    case 5:
    {
        cout << "Enter number:  " << endl;
        int n = getNum();
        if (isPrime(n))
        {
            cout<<"The given number is a prime number"<<endl;
        }
        else
        {
            cout<<"The given number is not a prime number."<<endl;
        }
        break;
    }

    default:
        break;
    return 0;
    }
}