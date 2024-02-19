# include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 4;

    //&,|,~,^

    cout<< (a&b)<< endl; //0
    cout<< (a|b)<< endl; //6
    cout<< (~a)<< endl; //-3
    cout<< (a^b)<< endl; //6

    // << , >>

    cout<< (a<<1)<< endl; //4
    cout<< (b>>2)<< endl; //1

    a++; // post-increment (use then change)
    ++a; // pre- increment (change then use)
    b++;
    ++b;
    return 0;
}