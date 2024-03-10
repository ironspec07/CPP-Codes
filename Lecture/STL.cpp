#include <iostream>
#include <array> // including stl array.
#include<vector> // including vectors.
#include<deque> // include deque.
using namespace std;

int main()
{
    //ARRAYS
    array<int,4> arr = {1,2,3,4}; // stl array decleration.
    cout<<"size of arr: "<<arr.size()<<endl;
    cout<<"Empty or Not: "<<arr.empty()<<endl;
    cout<<"First element of arr: "<<arr.front()<<endl;
    cout<<"Last element of arr: "<<arr.back()<<endl;
    cout<<endl;

    //VECTOR
    vector <int> v; //declaring vector.
    v.push_back(1); //0
    v.push_back(2); //1
    v.push_back(3); //2
    cout<<"Capacity of v: "<<v.capacity()<<endl; //initially 0. --> tells amount of space avalible.
    cout<<"Size of v: "<<v.size()<<endl;// tells number of element present in vector.
    cout<<"Element at 2nd index of v: "<<v.at(2)<<endl;
    cout<<"First element of v: "<<v.front()<<endl;
    cout<<"Last element of v: "<<v.back()<<endl;
    v.pop_back();//removes last element;
    v.clear(); // clears element of vector , size becomes 0 but capacity remains as it is.

    //DEQUE
    deque<int> d; //declaring deque.
    d.push_back(1); // insertion from back.
    d.push_front(2); // insertion from front.
    // d = {2,1}
    d.pop_back(); //deletionfrom back.
    //d = {2}
    d.push_back(1);
    // d = {2,1}
    d.pop_front();//deletion from front.
    // d = {1}
    d.push_front(2);
    // d = {2,1}
    cout<<"Element at 1st index of d: "<<d.at(1)<<endl; //1
    cout<<"First element of d: "<<d.front()<<endl; //2
    cout<<"Last element of d: "<<d.back()<<endl; //1
    cout<<"Empty or Not: "<<d.empty()<<endl; //0
    cout<<"Size of d: "<<d.size()<<endl; //2
    d.erase(d.begin(),d.begin()+1);//deleting first element 
    // d = {1}

    //LIST
    
}
