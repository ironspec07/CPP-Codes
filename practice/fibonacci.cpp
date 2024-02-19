# include <iostream>
using namespace std;

int main(){
    cout<< "enter length of series :  ";
    int n;  
    cin>> n;
    int a = 0;
    cout<< a << " ";
    int b = 1;
    cout<< b << " ";
    for(int i = 1 ; i<=n ; i++){
        int nextnum = a+b;
        a = b;
        b = nextnum;
        cout<< nextnum << " ";
    }
    return 0;
}