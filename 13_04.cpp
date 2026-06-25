/*
Assignment : 13
Topic : Operator Overloading
04  ||       In question-3, define operator pre decrement and post decrement to decrease distance by 1cm.

*/
#include<iostream>
using namespace std;

class Distance
{
    private:
        int km, m, cm;
    public:
        void showData()
        {
                if (cm >= 100)
                {    
                    cm -= 100; m++;
                }
                if (m >= 1000)
                {    
                    m -= 1000; km++;
                }
            cout<<"Distance = "<<km<<" km "<<m<<" m "<<cm<<" cm"<<endl;
        }
        Distance()
        {
            km = 0; m = 0; cm = 0;
        }
        Distance ( int a )
        {
            km = a; m = 0; cm = 0;
        }
        Distance( int a, int b )
        {
            km = a;  m = b; cm = 0;
        }
        Distance ( int a, int b, int c )
        {
            km = a; m = b; cm = c;
        }
        Distance& operator-- ()                              // Pre - Decrement
        {
            cm --;
            if (cm < 0)
            {
                cm += 100;  m--;
            }
            if (m < 0)
            {
                m += 1000; km--;
            }
            return (*this);
        }
        Distance operator-- (int)                           // Post - Decrement
        {   
            Distance temp = *this;
            --(*this);
            return temp;
        }
};
int main()
{
    Distance d1(5, 720, 60), d2, d3;
    d1.showData();
    d2 = --d1;
    cout<<"After Pre-Decrement => ";
    d2.showData();
    d3 = d1--;
    cout<<"After Post-Decrement => ";
    d3.showData();
    d1.showData();
    return 0;
}
/* 
    Why & used in Pre-increment ?
        => Because we want decrement in current object, not in a copy of it.
*/