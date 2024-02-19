/*There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls
received grades "A" if 17 boys made up 80% of the students that received grades "A".*/
#include<iostream>
using namespace std;
int main(){
    cout<<"total no. of students=45"<<endl;
    cout<<"total no. of girls= "<<(45-25)<<endl;
    cout<<"total no. of students left to score A grade = 20% "<<endl;
    cout<<"total no. of girls with A grade = "<<(0.2*20)<<endl;
    return 0;
}
