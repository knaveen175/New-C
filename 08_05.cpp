/*
Assignment : 08
Topic : Classes and Objects
05 ||       Define a class Circle with radius as its property. Provide setRadius() and getRadius methods. Also define methods to return area and circumference of circle.    

*/
#include<iostream>
using namespace std;

class Circle
{
    float radius;
    public:
    void setRadius(float r)
    {
        radius = r;
    }
    float getradius()
    {
        return radius;
    }
    double area()
    {
        return (3.14)*radius*radius;
    }
    double circumference()
    {
        return 2*(3.14)*radius;
    }
};
int main()
{
    float r, c, a;
    cout<<"Enter radius of circle: ";
    cin>>r;
    Circle c1;
    c1.setRadius(r);
    cout<<"Radius = "<<c1.getradius()<<endl;
    cout<<"Area = "<<c1.area()<<endl;
    cout<<"Circumference = "<<c1.circumference();
    return 0;
}