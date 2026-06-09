/*
Assignment : 02
Topic : Basics of C++
04 ||       Write a C++ program to calculate area of circle.

*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    float area;
    cout<<"Enter Radius: ";
    cin>>r;
    area = 3.14*r*r;
    cout<<"Area = "<<area;
    return 0;
}