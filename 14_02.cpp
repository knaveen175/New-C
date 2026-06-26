/*
Assignment : 14
Topic : Operator Overloading, friend operator
02  ||       Define a class Time with appropriate instance variables and member functions. Overload following operators.
        1.  << insertion operator
        2.  >> extraction operator

*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;
    public:
        void setdata(int a, int b, int c)
        {
            hr = a, min = b; sec = c;
        }
        void showData()
        {
            cout<<"Time = "<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
        friend ostream& operator<< ( ostream&, Time);
        friend istream& operator>> ( istream&, Time&);
};
ostream& operator<< ( ostream &dout, Time t)
{
    dout<<"Time = "<<"t.hr"<<" : "<<t.min<<" : "<<t.sec<<endl;
    return dout;
}
istream& operator>> ( istream &din, Time &t)
{
    cin>>t.hr>>t.min>>t.sec;
    return din;
}
int main()
{
    Time t1, t2;
    cout<<"Enter time: ";
    cin>>t1;
    cout<<"Enter another time:";
    cin>>t2;
    t1.showData();
    t2.showData();
    return 0;
}
/*
Use of Reference, Not a Copy of an object, 
*/