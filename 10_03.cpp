/*
Assignment : 10
Topic : Constructor
03  ||       Define a class Time with hr, min, sec as instance member variables. Define constructor to initialise time object.

*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;
    public:
        Time()
        {
            hr = 0; min = 0; sec = 0;
        }
        Time(int a)
        {
            hr = a; min = 0; sec = 0;
        }
        Time(int a, int b)
        {
            hr = a; min = b; sec = 0;
        }
        Time(int a, int b, int c)
        {
            hr = a; min = b; sec = c;
        }
        void showTime()
        {
            cout<<"Time = "<<hr<<" hrs : "<<min<<" min : "<<sec<<" sec"<<endl;
        }
};
int main()
{
    Time t1, t2(8), t3(8, 9), t4(8, 9, 10);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    t4.showTime();
    return 0;
}