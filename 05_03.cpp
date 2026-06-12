/*
Assignment : 05
Topic : Functions in C++
03 ||       Define overload functions to calculate area of circle, area of rectangle and area of triangle.

*/
#include<iostream>
using namespace std;

float area(int);
int area(int, int);
float area(float, float);
int main()
{
    int r, l, b;
    float x, y;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of Circle: "<<area(r)<<endl;
    cout<<"Enter length and breadth of Rectangle: ";
    cin>>l>>b;
    cout<<"Area of Rectangle: "<<area(l, b)<<endl;
    cout<<"Enter base and height of triangle: ";
    cin>>x>>y;
    cout<<"Area of Triangle: "<<area(x, y);
    return 0;
}
float area(int a)
{
    return (3.14*a*a);
}
int area(int a, int b)
{
    return (a*b);
}
float area(float x, float y)
{
    return ((0.5)*x*y);
}