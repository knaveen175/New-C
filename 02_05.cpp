/*
Assignment : 02
Topic : Basics of C++
05 ||       Write a C++ program to calculate Volume of Cuboid.

*/
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,Volume;
    cout<<"Enter Length of Cuboid: ";
    cin>>l;
    cout<<"Enter Breadth of Cuboid: ";
    cin>>b;
    cout<<"Enter Height of Cuboid: ";
    cin>>h;
    Volume = l*b*h;
    cout<<"Volume = "<<Volume;
    return 0;
}