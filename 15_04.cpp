/*
Assignment : 15
Topic : Operator Overloading, friend operator
04  ||       In Question-3, provide overload insertion and extraction operators.

*/
#include<iostream>
using namespace std;

class Coordinate
{
    private:
        int x, y;
    public:
    friend ostream& operator<< (ostream&, Coordinate);
    friend istream& operator>> (istream&, Coordinate&);
};
ostream& operator<< (ostream& dout, Coordinate C)
{
    dout<<"Coordinate = ("<<C.x<<", "<<C.y<<")"<<endl;
    return dout;
}
istream& operator>> (istream& din, Coordinate& C)
{
    din>>C.x>>C.y;
    return din;
}
int main()
{
    Coordinate c1;
    cout<<"Enter coordinate: ";
    cin>>c1;
    cout<<c1;
    return 0;
}