/*
Assignment : 05
Topic : Functions in C++
02 ||       Define a C++ function using the default argument that is able to add 2 or 3 numbers.

*/
#include<iostream>
using namespace std;

int add( int x, int y, int z = 0);
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of two numbers = " <<add(a, b)<<endl;
    cout<<"Sum of two numbers = " <<add(a, b, c);
    return 0;
}
int add( int x, int y, int z)
{
    return x+y+z;
}