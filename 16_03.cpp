/*
Assignment : 16
Topic : Pointer, this, DMA
03  ||       In Question-2, write a non member function in which instantiate Complex class dynamically. Initialise instance variables and display their values.  

*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
    friend void f1(int, int);
};
void f1(int a, int b)
{
    Complex *p = new Complex;
    p->a = a;   p->b = b;
    if (p->b >= 0)
        cout<<"Complex Number -> "<<p->a<<"+"<<p->b<<"i"<<endl;
    else
        cout<<"Complex Number -> "<<p->a<<p->b<<"i"<<endl;
    delete p;
}
int main()
{
    int a, b;
    cout<<"Enter real part: ";
    cin>>a;
    cout<<"Enter imaginary part: ";
    cin>>b;
    f1(a, b);
    return 0;
}