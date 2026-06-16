/*
Assignment : 08
Topic : Classes and Objects
03 ||       Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.

*/
#include<iostream>
using namespace std;

class Date
{
    int date, month, year;
    public:
    void setdate(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }
    void getdate()
    {
        cout<<"d = "<<date<<" m = "<<month<<" y = "<<year;
    }
};
int main()
{
    int a, b, c;
    cout<<"Enter Date( date month year): ";
    cin>>a>>b>>c;
    Date d;
    d.setdate(a, b, c);
    d.getdate();
    return 0;
}