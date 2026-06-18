/*
Assignment : 09
Topic : member functions
01 ||       Define a class Complex to represent a Complex number with instance variables a and b to store real and imaginary parts. Also define following member functions
    1.  void setData(int, int)
    2.  void showData()    
    3.  Complex add (Complex)
    4.  Complex substract (Complex)
    5.  Complex multiply (Complex)

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
            a = x;
            b = y;
        }
        void showData()
        {
            if (b >= 0)
                cout<<"Complex Number = "<<a<<"+"<<b<<"i"<<endl;
            else
                cout<<"Complex Number = "<<a<<b<<"i"<<endl;
        }
        Complex add (Complex x)
        {
            Complex p;
            p.a = a + x.a;
            p.b = b + x.b;
            return p;
        }
        Complex substract (Complex x)
        {
            Complex q;
            q.a = a - x.a;
            q.b = b - x.b;
            return q;
        }
        Complex multiply (Complex x)
        {
            Complex r;
            r.a = a*x.a - b*x.b;
            r.b = a*x.b + b*x.a;
            return r;
        }
};
int main()
{
    Complex c1, c2, c3, c4, c5; 
    int p, q, r, s;
    cout<<"Enter Real part: ";
    cin>>p;
    cout<<"Enter Imaginary part: ";
    cin>>q;
    cout<<"Enter Another Real part: ";
    cin>>r;
    cout<<"Enter Another Imaginary part: ";
    cin>>s;
    c1.setData(p,q);
    c1.showData();
    c2.setData(r,s);
    c2.showData();
    c3 = c1.add(c2);
    c4 = c1.substract(c2);
    c5 = c1.multiply(c2);
    c3.showData();
    c4.showData();
    c5.showData();
    return 0;
}