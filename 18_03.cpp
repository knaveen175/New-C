/*
Assignment : 18
Topic : Inheritance
03  ||       Define a class Coordinate with x and y as instance variables. Define overloaded versions of getDistance(), first with no argument calculating distance from origin, and second with of one argument of Coordinate type to calculate distance between two Coordinates.Also define other methods if required.

*/
#include<iostream>
#include<math.h>
using namespace std;

class Coordinate
{
    private:
        int x, y;
    public:
        float getDistance()
        {
            return (sqrt(x*x + y*y));
        }
        float getDistance(Coordinate c)
        {
            float a, b;
            a = (x-c.x)*(x-c.x);
            b = (y-c.y)*(y-c.y);
            return sqrt (a+b);
        }
        void setData(int x, int y)
        {   
            this->x = x;   this->y = y;
        }
};
int main()
{
    Coordinate c1,c2;
    int x, y;
    cout<<"Enter Coordinates: ";
    cin>>x>>y;
    c1.setData(x,y);
    cout<<"Enter Another Coordinates: ";
    cin>>x>>y;
    c2.setData(x,y);
    cout<<"Distance from Origin = "<<c1.getDistance()<<endl;
    cout<<"Distance between both Coordinates = "<<c1.getDistance(c2);
    return 0;
}