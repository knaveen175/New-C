/*
Assignment : 17
Topic : Pointer, this, DMA
02  ||       In Question-1, define a method to dynamically create an array of Time objects with specified size (recieved through argument) and return array.

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
Time* f1(int a)
{
    Time *p = new Time[a];
    return p;
}
int main()
{
    int a;
    cout<<"Enter size: ";
    cin>>a;
    Time *q = f1(a);
    return 0;
}