#include <iostream>
#include <array> // including stl array.
#include<vector> // including vectors.
#include<deque> // include deque.
#include <algorithm> // including STL Algos.
using namespace std;

int main()
{
    // //ARRAYS
    // array<int,4> arr = {1,2,3,4}; // stl array decleration.
    // cout<<"size of arr: "<<arr.size()<<endl;
    // cout<<"Empty or Not: "<<arr.empty()<<endl;
    // cout<<"First element of arr: "<<arr.front()<<endl;
    // cout<<"Last element of arr: "<<arr.back()<<endl;
    // cout<<endl;

    // //VECTOR
    // vector <int> v; //declaring vector.
    // v.push_back(1); //0
    // v.push_back(2); //1
    // v.push_back(3); //2
    // cout<<"Capacity of v: "<<v.capacity()<<endl; //initially 0. --> tells amount of space avalible.
    // cout<<"Size of v: "<<v.size()<<endl;// tells number of element present in vector.
    // cout<<"Element at 2nd index of v: "<<v.at(2)<<endl;
    // cout<<"First element of v: "<<v.front()<<endl;
    // cout<<"Last element of v: "<<v.back()<<endl;
    // v.pop_back();//removes last element;
    // v.clear(); // clears element of vector , size becomes 0 but capacity remains as it is.

    // //DEQUE
    // deque<int> d; //declaring deque.
    // d.push_back(1); // insertion from back.
    // d.push_front(2); // insertion from front.
    // // d = {2,1}
    // d.pop_back(); //deletionfrom back.
    // //d = {2}
    // d.push_back(1);
    // // d = {2,1}
    // d.pop_front();//deletion from front.
    // // d = {1}
    // d.push_front(2);
    // // d = {2,1}
    // cout<<"Element at 1st index of d: "<<d.at(1)<<endl; //1
    // cout<<"First element of d: "<<d.front()<<endl; //2
    // cout<<"Last element of d: "<<d.back()<<endl; //1
    // cout<<"Empty or Not: "<<d.empty()<<endl; //0
    // cout<<"Size of d: "<<d.size()<<endl; //2
    // d.erase(d.begin(),d.begin()+1);//deleting first element 
    // // d = {1}
    // cout<<endl;
    // //LIST
    // //stack
    // //queue
    // //Priority queue
    // //Set
    // //Map

    //STL Algorithms

    vector <int> vec;
    vec.push_back(1); //0
    vec.push_back(3); //1
    vec.push_back(6); //2
    vec.push_back(7); //3
    cout<<"Finding 6: "<<binary_search(vec.begin(),vec.end(),6)<<endl;
    cout<<"Finding lower bound of 6: "<<lower_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl; // returns iterator. // 2
    cout<<"Finding upper bound of 6: "<<upper_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl; // returns iterator. // 3

    //max(a,b)
    //min(a,b)
    //swap(a,b)

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;//dcba

    rotate(vec.begin(),vec.begin()+2,vec.end()); // 6,7,1,3
    sort(vec.begin(),vec.end()); // 1,3,6,7
    for(int i=0 ;i<4;i++) 
    {
        cout<<vec[i]<<endl;
    }
    




}
