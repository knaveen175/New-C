/*
Assignment : 16
Topic : Pointer, this, DMA
02  ||       Define a class Complex with instance variables a and b to store real and imaginary part of a complex number. Provide setData() method with formal arguments with the name a and b to set the values of instance variables. Also define showData() method to display instance member variable values.  

*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int a, int b)
        {
            this->a = a;    this->b = b;
        }
        void showData()
        {
            if (b >= 0)
                cout<<"Complex Number -> "<<a<<"+"<<b<<"i"<<endl;
            else
                cout<<"Complex Number -> "<<a<<b<<"i"<<endl;
        }
};
int main()
{
    Complex c1;
    int a, b;
    cout<<"Enter real part: ";
    cin>>a;
    cout<<"Enter imaginary part: ";
    cin>>b;
    c1.setData(a, b);
    c1.showData();
    return 0;
}