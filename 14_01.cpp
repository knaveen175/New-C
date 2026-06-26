/*
Assignment : 14
Topic : Operator Overloading, friend operator
01  ||       Define a class complex and overload following operator as a friend.
        1.  +
        2.  -
        3.  *

*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void showData()
        {
            if (b >= 0)
                cout<<"Complex Number -> "<<a<<"+"<<b<<"i"<<endl;
            else
                cout<<"Complex Number -> "<<a<<b<<"i"<<endl;
        }
        void setData(int x, int y)
        {
            a = x; b = y;
        }
        friend Complex operator+ (Complex, Complex);
        friend Complex operator- (Complex, Complex);
        friend Complex operator* (Complex, Complex);
};
Complex operator+ (Complex C, Complex D)
{
    Complex temp;
    temp.a  = C.a + D.a;
    temp.b  = C.b + D.b;
    return temp;
}
Complex operator- (Complex C, Complex D)
{
    Complex temp;
    temp.a  = C.a - D.a;
    temp.b  = C.b - D.b;
    return temp;
}
Complex operator* (Complex C, Complex D)
{
    Complex temp;
    temp.a  = C.a*D.a - C.b*D.b;
    temp.b  = C.a*D.b + C.b*D.a;
    return temp;
}
int main()
{
    Complex c1, c2, c3, c4, c5;
    int a, b;
    cout<<"Enter Real Part of Complex Number: ";
    cin>>a;
    cout<<"Enter Complex Part of Complex Number: ";
    cin>>b;
    c1.setData(a, b);
    cout<<"Enter Real Part of Another Complex Number: ";
    cin>>a;
    cout<<"Enter Complex Part of Another Complex Number: ";
    cin>>b;
    c2.setData(a, b);
    c1.showData();
    c2.showData();
    c3 = c1 + c2;
    cout<<"Addition = ";
    c3.showData(); 
    c4 = c1 - c2;
    cout<<"Substraction = ";
    c4.showData();
    c5 = c1 * c2;
    cout<<"Multiplicaton = ";
    c5.showData();
    return 0;
}