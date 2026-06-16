/*
Assignment : 08
Topic : Classes and Objects
01 ||       Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member variables to set values of complex number and print values of complex number.

*/
#include<iostream>
using namespace std;

class Complex
{
    int real, imaginary;

    public:
    void setvalue(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void showvalue()
    {
        cout<<"Complex Number = ";
        if (imaginary >= 0)
            cout<<real<<"+"<<imaginary<<"i";
        else
            cout<<real<<imaginary<<"i";
    }

};
int main()
{
    int r, i;
    cout<<"Enter real part of the complex number(with sign): ";
    cin>>r;
    cout<<"Enter imaginary part of the complex number(with sign): ";
    cin>>i;
    Complex n1;
    n1.setvalue(r, i);
    n1.showvalue();
    return 0;
}