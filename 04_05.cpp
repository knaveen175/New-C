/*
Assignment : 04
Topic : Functions in C++
05 ||       Define a C++ function to check whether a given number is a term in a Fibonacci series or not.

*/
#include<iostream>
using namespace std;

int check(int);
int main()
{
    int a, b;
    cout<<"Enter a number: ";
    cin>>a;
    b = check(a);
    if ( b == 1)
        cout<<"Fibonacci Term";
    else
        cout<<"Not a Fibonacci Term";
    return 0;
}
int check (int x)
{
    int a = 0, b = 1, y, i;
    if (x == 0 || x == 1)
        return 1;
    if (x > 1)
    {
        y = 0;
        for ( i = 0 ; y <= x ; i++)
        {
            y = a+b;
            a = b;
            b = y;
            if ( y == x )
                return 1;
        }
        return 0;
    }
}