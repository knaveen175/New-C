/*
Assignment : 12
Topic : Operator Overloading
01  ||       Define a class Complex with appropriate instance variables and member functions. Define following operators in the class:
    1.  +
    2.  -
    3.  *
    4.  ==

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
        Complex operator+ (Complex C)
        {
            Complex temp;
            temp.a = a + C.a;
            temp.b = b + C.b;
            return temp;
        }
        Complex operator- (Complex C)
        {
            Complex temp;
            temp.a = a - C.a;
            temp.b = b - C.b;
            return temp;
        }
        Complex operator* (Complex C)
        {
            Complex temp;
            temp.a = a*C.a - b*C.b;
            temp.b = a*C.b + b*C.a;
            return temp;
        }
        bool operator== (Complex C)
        {
            return ((a== C.a) && (b == C.b));
        }   
};
int main()
{
    Complex c1, c2, c3, c4, c5;
    int a, b, c, d;
    cout<<"Enter Real Part: ";
    cin>>a;
    cout<<"Enter Imaginary Part: ";
    cin>>b;
    cout<<"Enter Real Part: ";
    cin>>c;
    cout<<"Enter Imaginary Part: ";
    cin>>d;
    c1.setData(a,b);
    c2.setData(c,d);
    c3 = c1.operator+ (c2);
    c3.showData();
    c4 = c1.operator- (c2);
    c4.showData();
    c5 = c1.operator* (c2);
    c5.showData();
    if (c1 == c2)
        cout<<"Both Complex numbers are equal";
    else
        cout<<"Both Complex numbers are not equal";
    return 0;
}