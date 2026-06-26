/*
Assignment : 14
Topic : Operator Overloading, friend operator
03  ||       In Question-2 overload operator= to perform copy of Time object

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
        Time& operator= (Time &t)
        {
            hr = t.hr; min = t.min; sec = t.sec;
            return *this;
        }
        friend ostream& operator<< ( ostream&, Time);
        friend istream& operator>> ( istream&, Time&);
};
ostream& operator<< ( ostream &dout, Time t)
{
    dout<<"Time = "<<t.hr<<" : "<<t.min<<" : "<<t.sec<<endl;
    return dout;
}
istream& operator>> ( istream &din, Time &t)
{   
    din>>t.hr>>t.min>>t.sec;
    return din;
}
int main()
{
    Time t1, t2, t3;
    cout<<"Enter time: ";
    cin>>t1;
    cout<<"Enter another time:";
    cin>>t2;
    t1.showData();
    t2.showData();
    t3 = t2;
    t3.showData();
    return 0;
}
/*
    Case 1: When Time t1 = t2 (Copy Constructor runs up)
    Case 2: Time t1, t2;
                 t1 = t2;    (Assignment operator runs)
*/