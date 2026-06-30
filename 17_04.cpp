/*
Assignment : 17
Topic : Pointer, this, DMA
04  ||       In Question-1, define a method to display Time object array values. Array is recieved through argument.

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
        void showTime()
        {
            cout<<"Time -> "<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
};
void f1(Time *t)
{
    for (int i = 0 ; i < 4 ; i++)
        t[i].showTime();
}
int main()
{
    Time t[4];
    int a, b, c, i;
    for ( i = 0 ; i < 4 ; i++)
    {
        cout<<"Enter Time"<<"i+1"<<" : "; 
        cin>>a>>b>>c;
        t[i].setTime(a, b, c);
    }
    f1(t);
    return 0;
}