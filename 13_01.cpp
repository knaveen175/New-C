/*
Assignment : 13
Topic : Operator Overloading
01  ||       Define a C++ class fraction.
            class fraction
            {
                    long numerator;
                    long denominator;
                public:
                    fraction ( long n = 0, long d = 0);
            };
    Define an operator + to add two fraction object. 

*/
#include<iostream>
using namespace std;

class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction ()
        {
            numerator = 0; denominator = 0; 
        }
        void showData()
        {
            cout<<"fraction = "<<numerator<<" / "<<denominator<<endl;
        }
        void setData(long a, long b)
        {
            numerator = a;  denominator = b;
        }
        fraction operator+ (fraction f)
        {
            fraction temp;
            temp.numerator = denominator* f.numerator + f.denominator* numerator;
            temp.denominator = denominator * f.denominator;
            return temp;
        }

};
int main()
{
    fraction f1, f2, f3;
    long a, b;
    cout<<"For 1st fraction => ";
    cout<<"Enter Numerator: ";
    cin>>a;
    cout<<"Enter Denominator: ";
    cin>>b;
    f1.setData(a, b);

    cout<<"For 2nd fraction => ";
    cout<<"Enter Numerator: ";
    cin>>a;
    cout<<"Enter Denominator: ";
    cin>>b;
    f2.setData(a, b);

    f1.showData();
    f2.showData();
    f3 = f1 + f2;
    cout<<"1st + 2nd fraction => "; 
    f3.showData();
    return 0;
}