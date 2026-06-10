/*
Assignment : 03
Topic : Basics of C++
03 ||       Write a C++ program to swap values of two int variables without using third variable.

*/
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping => a = "<<a<<" b = "<<b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<endl;cout<<"After Swapping => a = "<<a<<" b = "<<b;
    return 0;
}