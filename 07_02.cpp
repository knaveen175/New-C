/*
Assignment : 07
Topic : More on Functions in C++
02 ||       Define overloaded functions to calculate volume of a cuboid, cone and sphere.

*/
#include<iostream>
using namespace std;

int Volume(int, int, int);
float Volume(int, int);
float Volume(int);
int main()
{
    int l, b, h, r, height, R;
    cout<<"Enter length, breadth and height of Cuboid: ";
    cin>>l>>b>>h;
    cout<<"Volume of Cuboid = "<<Volume(l, b, h)<<endl;

    cout<<"Enter radius and height of Cone: ";
    cin>>r>>height;
    cout<<"Volume of Cone = "<<Volume(r, height)<<endl;

    cout<<"Enter radius of Sphere: ";
    cin>>R;
    cout<<"Volume of Sphere = "<<Volume(R);
    return 0;
}
int Volume(int l, int b, int h)
{
    return l*b*h;
}
float Volume(int r, int h)
{
    return (1/3.0)*(3.14)*r*r*h;
}
float Volume(int r)
{
    return (4/3.0)*(3.14)*r*r*r;
}