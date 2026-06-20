/*
Assignment : 10
Topic : Constructor
05  ||       Define a class Complex with instance variables for real and imaginary part of a complex number. Define only one parameterised Constructor to initialise complex object. Also define showData method in the class to display object data. Now create an array of complex class with size 5 and display values of each object.

*/
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        Complex (int x, int y):a(x), b(y)
        {}
        void showData()
        {
            if (b>=0)
                cout<<"Complex Number = "<<a<<"+"<<b<<"i"<<endl;
            else
                cout<<"Complex Number = "<<a<<b<<"i"<<endl;
        }
};
int main()
{
    Complex C[5] = {{1,2},{3,4},{5,6},{7,8},{9,0}};
    C[0].showData();
    C[1].showData();
    C[2].showData();
    C[3].showData();
    C[4].showData();
    return 0;
}
/*
Declaration of Object with initialization Process {}
*/