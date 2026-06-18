/*
Assignment : 09
Topic : member functions
02 ||       Define a class Time to represent Time with instance variables h, m and s to store hour, minute and second. Also define following member functions
    1.  void setTime(int, int, int)
    2.  void showTime()    
    3.  void normalize()
    4.  Time add (Time)
    5.  bool is_greater (Time)

*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int h, m, s;
    public:
        void setTime(int a, int b, int c)
        {
            h = a; m = b; s = c;
        }
        void showTime()
        {
            cout<<"Time = "<<h<<" : "<<m<<" : "<<s<<endl;
        }
        void normalize()
        {
            while(1)
            {   
                if (s >= 60)
                {
                    m++;
                    s -= 60;
                } 
                if (m >= 60)
                {   
                    h++;
                    m -= 60;
                }
                if (h > 12)
                    h -= 12;  
                if (( h >= 0 && h <=12) && (m >= 0 && m < 60) && (s >= 0 && s < 60))     
                    break;
            }
            cout<<"After Normalizing => ";
            cout<<"Time = "<<h<<" : "<<m<<" : "<<s<<endl;
        }
        Time add (Time p)
        {
            Time t;
            int x = (60*60*h + 60*m + s) + (60*60*p.h + 60*p.m + p.s);
            t.h = x / 3600;
            t.m = (x - t.h*3600) / 60;
            t.s = (x - t.h*3600 - t.m*60) % 60;
            return t;
        }
        bool is_Greater (Time t)
        {
            if ( h > t.h)
                return true;
            if (t.h > h)
                return false;
            if ( m > t.m)
                return true;
            if (t.m > m)
                return false;
            return (s > t.s);
        }
};
int main()
{
    int a, b, c, d, e, f;
    Time t1, t2, t3;
    cout<<"Enter Time: ";
    cin>>a>>b>>c;
    cout<<"Enter Another Time: ";
    cin>>d>>e>>f;
    t1.setTime(a, b, c);
    t2.setTime(d, e, f);
    t1.showTime();
    t2.showTime();
    t1.normalize();
    t2.normalize();
    t3 = t1.add(t2);
    cout<<"Sum ";
    t3.showTime();
    if (t1.is_Greater(t2))
        cout<<"Time 1 is Greater";
    else
        cout<<"Time 2 is Greater";
    return 0;
}