/*
Assignment : 13
Topic : Operator Overloading
02  ||       In Question-1, define an operator < to compare two fraction objects. 

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
        bool operator < (fraction f)
        {
            double x = (numerator*1.0) / denominator;
            double y = (f.numerator*1.0) / f.denominator;
            return (x < y);
        }

};
int main()
{
    fraction f1, f2;
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
    if (f1 < f2)
        cout<<"fraction 1 is smaller than fraction 2";
    else
        cout<<"fraction 1 is greater than fraction 2";
    return 0;
}