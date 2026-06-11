/*
Assignment : 04
Topic : Functions in C++
02 ||       Define a C++ function to find the highest value digit in a given number.

*/
#include<iostream>
using namespace std;

int find (int);
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The highest value digit in the given number = "<<find(a);
    return 0;
}
int find (int a)
{
    int b, x, n, i;
    b = a;
    for ( i = 0 ; b > 0 ; i++)
        b /= 10;
    n = i;
    x = a%10;
    a /= 10;
    for ( i = 0 ; i < n ; i++)
    {    
        if ( x < (a%10))
            x = a % 10;
        a /= 10;
    }
    return x;
}