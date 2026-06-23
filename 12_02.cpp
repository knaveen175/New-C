/*
Assignment : 12
Topic : Operator Overloading
02  ||       Create a class Time which contains hour, min and seconds as fields. Overload greater than. (>) operator to compare two time objects.

*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hour, min, seconds;
    public:
        Time()
        {
            hour = 0; min = 0; seconds = 0;
        }
        Time(int a, int b, int c)
        {
            hour = a; min = b; seconds = c;
        }
        void showData()
        {
            cout<<"Time - "<<hour<<" : "<<min<<" : "<<seconds<<endl;
        }
        bool operator> (Time T)
        {
            if (hour != T.hour)
                return (hour > T.hour);
            if (min != T.min)
                return (min > T.min);
            return (seconds > T.seconds);
        }
};
int main()
{
    Time t1(5, 25, 39), t2(7, 14, 31), t3;
    t1.showData();
    t2.showData();
    if (t1 > t2)
        cout<<"Time 1 is greater";
    else
        cout<<"Time 2 is greater";
    return 0;
}