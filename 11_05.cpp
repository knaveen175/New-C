/*
Assignment : 11
Topic : Constructor
05  ||       Define Circle class with radius as instance variable. Define two constructors in the class non-parameterised and parameterised. 

*/
#include<iostream>
using namespace std;

class Circle
{
    private:
        float radius;
    public:
        void showData() 
        {
            cout<<"Radius - "<<radius<<endl;
        }
        Circle()
        {
            radius = 0;
        }
        Circle(float r)
        {
            radius = r;
        }
};
int main()
{
    Circle c1, c2(5.2);
    c1.showData();
    c2.showData();
    return 0;
}