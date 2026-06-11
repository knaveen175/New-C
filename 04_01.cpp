/*
Assignment : 04
Topic : Functions in C++
01 ||       Define a C++ function to print all prime numbers between two given numbers.

*/
#include<iostream>
using namespace std;

void check(int, int);
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    check(a, b);
    return 0;
}
void check(int a, int b)
{
    int i, j;
    cout<<"Prime numbers between "<<a<<" and "<<b<<" are =>";
    for ( i = a+1 ; i < b ; i ++)
    {  
        for ( j = 2 ; j < i ; j++)
            if ( i % j == 0)
                break;
        if ( j == i )
            cout<<" "<<i;
    }
}