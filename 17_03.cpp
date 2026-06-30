/*
Assignment : 17
Topic : Pointer, this, DMA
03  ||       In Question-1, define a method to sort Time object array.

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
        int get_hr()     { return this->hr; }
        int get_min()    { return this->min; }
        int get_sec()    { return this->sec; }
};
Time* f1(int a)
{
    Time *p = new Time[a];
    return p;
}
void sorting (Time *q, int size)
{
    int i, j;
    Time temp;
    for (i = 0 ; i < size ; i++)
        for (j = i+1 ; j < size ; j++)
        {
            if (q[i].get_hr() > q[j].get_hr())
            {
                temp = q[i];
                q[i] = q[j];
                q[j] = temp;
            }
            if (q[i].get_hr() == q[j].get_hr())
            {
                if (q[i].get_min() > q[j].get_min())
                {
                    temp = q[i];
                    q[i] = q[j];
                    q[j] = temp;
                }
            }
            if (q[i].get_hr() == q[j].get_hr())
            {
                if (q[i].get_min() == q[j].get_min())
                {
                    if (q[i].get_sec() > q[j].get_sec())
                    {    
                        temp = q[i];
                        q[i] = q[j];
                        q[j] = temp;
                    }
                }
            }
        }
}
int main()
{
    int a, i, x ,y ,z;
    cout<<"Enter size: ";
    cin>>a;
    Time *q = f1(a);
    for (i = 0 ; i < a ; i++)
    {    
        cout<<"Enter Time "<<(i+1)<<" : ";
        cin>>x>>y>>z;
        q[i].setTime(x, y, z);
    }
    sorting(q, a);
    for (i = 0 ; i < a ; i++)
    {
        cout<<(i+1)<<" ";
        q[i].showTime();
    }
    delete[] q;
    return 0;
}