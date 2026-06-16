/*
Assignment : 08
Topic : Classes and Objects
02 ||       Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define member functions to set values for time and display values of time.

*/
#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;
    public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void showTime()
    {
        cout<<"Time = "<<hour<<" hr "<<minute<<" min "<<second<<" sec";
    }
};
int main()
{
    int h, m, s;
    cout<<"Enter Time(hour, minute, second): ";
    cin>>h>>m>>s;
    Time t;
    t.setTime(h, m, s);
    t.showTime();
    return 0;
}