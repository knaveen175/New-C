/*
Assignment : 17
Topic : Pointer, this, DMA
01  ||       Define a class Time with instance variables hr, min and sec. Provide instance methods setTime() and showTime(). setTime() method has formal arguments with same name as instance variables. Also define setters and getters.

*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;
    public:
        void setTime(int hr, int min, int sec)
        {
            while((sec >= 60) || (min >= 60) || (hr >= 24))
            {
                if (sec >= 60)
                {   sec -= 60;
                    min++;  }
                if (min >= 60)
                {   min -= 60;
                    hr++;   }
                if (hr >= 24)
                    hr -= 24;
            }
            this->hr = hr;  this->min = min;  this->sec = sec;
        }
        void set_hr(int hr)
        {   this->hr = hr;  }
        void set_min(int min)
        {   this->min = min;  }
        void set_sec(int sec)
        {   this->sec = sec;  }
        void showTime()
        {
            cout<<"Time -> "<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
        int get_hr()
        { return hr; }
        int get_min()
        { return min; }
        int get_sec()
        { return sec; }
};
int main()
{
    Time t1;
    int a, b, c;
    cout<<"Enter time: ";
    cin>>a>>b>>c;
    t1.setTime(a, b, c);
    t1.showTime();
    cout<<"Time => "<<t1.get_hr()<<" : "<<t1.get_min()<<" : "<<t1.get_sec()<<endl;
    return 0;
}