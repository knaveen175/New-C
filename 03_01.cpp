/*
Assignment : 03
Topic : Basics of C++
01 ||       Write a C++ program to calculate an average of three numbers.

*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    float avg = (a+b+c) / 3.0;
    cout<<"Average = "<<avg;
    return 0;
}