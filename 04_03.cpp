/*
Assignment : 04
Topic : Functions in C++
03 ||       Define a C++ function to calculate x raised to the power y.

*/
#include<iostream>
using namespace std;

int find( int, int);
int main()
{
    int x, y;
    cout<<"For x raised to the power y, Enter the value of x and y: ";
    cin>>x>>y;
    cout<<"Result = "<<find(x, y);
    return 0;
}
inline int find ( int a, int b)
{
    int i, result = 1;
    for ( i = 0 ; i < b ; i++)
        result *= a;
    return result;
}