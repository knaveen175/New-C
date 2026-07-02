/*
Assignment : 18
Topic : Inheritance
02  ||       Define a class Circle with Radius as private instance variable and setRadius(), getRadius(), getArea() as public instance methods. Define a class ThickCircle as a subclass of a circle with Thickness as private instance varaible and getThickness(), setThickness() as public instance methods. Provide an overridden method getArea() to calculate area of thick portion of circle.

*/
#include<iostream>
using namespace std;

class Circle 
{
    private:
        float Radius;
    public:
        void setRadius(float r)
        { Radius = r; }

        float getRadius()
        { return Radius; }

        virtual float getArea()
        { return (3.14*Radius*Radius); }
};
class ThickCircle: public Circle
{
    private:
        float Thickness;
    public:
        void setThickness(float t)
        { Thickness = t; }

        float getThickness()
        { return Thickness; }

        float getArea()
        {
            return (Circle::getArea()- 3.14*(getRadius()-Thickness)*(getRadius()-Thickness));
        }
};
int main()
{
    ThickCircle c1;
    float r, t;
    cout<<"Enter Radius: ";
    cin>>r;
    cout<<"Enter Thickness: ";
    cin>>t;
    c1.setRadius(r);
    c1.setThickness(t);
    cout<<"Area = "<<c1.getArea()<<endl;
    return 0;
}
/*
float getArea()
    {
        return (Circle::getArea()- 3.14*(getRadius()-Thickness)*(getRadius()-Thickness));
    }
*/