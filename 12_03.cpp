/*
Assignment : 12
Topic : Operator Overloading
03  ||       In question-2, overload pre-increment and post increment operator to increment Time object value by one second.

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
            cout<<" "<<hour<<" : "<<min<<" : "<<seconds<<endl;
        }
        void operator++ ()
        {
            seconds++;
            if (seconds == 60)
            {   
                min++; seconds = 0;
                if (min == 60)
                {
                    hour++; min = 0;
                }
            }
        }        
};
int main()
{
    Time t1(5, 25, 39);
    t1.showData();
    t1.operator++();
    cout<<"After Post-Increment => Time 1: ";
    t1.showData();
    return 0;
}