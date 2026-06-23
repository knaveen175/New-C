/*
Assignment : 12
Topic : Operator Overloading
04  ||       In question-2, overload operator+ to add two Time objects.

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
            if (seconds >= 60)
            {
                min++;  seconds -= 60;
                if (min >= 60)
                {
                    hour ++;    min-= 60;
                }

            }
            cout<<"Time - "<<hour<<" : "<<min<<" : "<<seconds<<endl;
        }
        Time operator+ (Time T)
        {
            Time temp;
            temp.hour = hour + T.hour;
            temp.min = min + T.min;
            temp.seconds = seconds + T.seconds;
            return temp;
        }
    
};
int main()
{
    Time t1(5, 25, 39), t2(7, 14, 31), t3;
    t1.showData();
    t2.showData();
    cout<<"After adding times: "<<endl;
    t3 = t1 + t2;
    t3.showData();
    return 0;
}