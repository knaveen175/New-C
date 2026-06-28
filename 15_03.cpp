/*
Assignment : 15
Topic : Operator Overloading, friend operator
03  ||       Create a Coordinate class with two instance variables x and y. Overload comma operator such that when you write c3 = (c1, c2) then c2 is assigned to c3. Where c1, c2, c3 are objects of Coordinate class.

*/
#include<iostream>
using namespace std;

class Coordinate
{
    private:
        int x, y;
    public:
        void setData(int a, int b)
        {
            x = a;  y = b;
        }
        void showData()
        {
            cout<<"Coordinate = ("<<x<<", "<<y<<")"<<endl;
        }
    friend Coordinate operator, (Coordinate, Coordinate);
};
Coordinate operator, (Coordinate c1, Coordinate c2)
{
    Coordinate temp;
    temp.x = c2.x;  temp.y = c2.y;
    return temp;
}
int main()
{
    int a, b;
    Coordinate c1, c2, c3;
    cout<<"For Point 1 -> "<<endl;
    cout<<"Enter X-Coordinate: ";
    cin>>a;
    cout<<"Enter Y-Coordinate: ";
    cin>>b;
    c1.setData(a,b);

    cout<<"For Point 2 -> "<<endl;
    cout<<"Enter X-Coordinate: ";
    cin>>a;
    cout<<"Enter Y-Coordinate: ";
    cin>>b;
    c2.setData(a, b);
    c3 = (c1, c2);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}