/*
Assignment : 03
Topic : Basics of C++
05 ||       Write a C++ program to add all the numbers of an array of size 10.

*/
#include<iostream>
using namespace std;

int main()
{
    int i, a[10], sum = 0;
    cout<<"Enter ten numbers: ";
    for ( i = 0 ; i < 10 ; i++)
        cin>>a[i];
    for ( i = 0 ; i < 10 ; i++)
        sum = sum + a[i];
    cout<<"Sum = "<<sum;
    return 0;
}