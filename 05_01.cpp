/*
Assignment : 05
Topic : Functions in C++
01 ||       Define a C++ function to swap data of two int variables using call by reference.

*/
#include<iostream>
using namespace std;

void swap(int&, int&);
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping:  a = "<<a<<", b = "<<b<<endl; 
    swap(a, b);
    cout<<"After Swapping:  a = "<<a<<", b = "<<b; 
    return 0;
}
void swap(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}