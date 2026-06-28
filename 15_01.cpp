/*
Assignment : 15
Topic : Operator Overloading, friend operator
01  ||       Define a class Complex and provide a unary operator- to negate the real and imaginary part of a complex number.

*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a = x; b = y;
        }
        void showData()
        {
            if (b >= 0)
                cout<<"Complex Number = "<<a<<"+"<<b<<"i"<<endl;
            else
                cout<<"Complex Number = "<<a<<b<<"i"<<endl;
        }
        friend Complex operator- (Complex);
};
Complex operator- (Complex C)
{
    Complex temp;
    temp.a = - C.a;     temp.b = - C.b;
    return temp;
}
int main()
{
    int a, b;
    cout<<"Enter Real Part: ";
    cin>>a;
    cout<<"Enter Imaginary Part: ";
    cin>>b;
    Complex c1, c2;
    c1.setData(a,b);
    cout<<"Before Negating => ";
    c1.showData();
    c2 = -c1;
    cout<<"After Negating => ";
    c2.showData();
    return 0;
}