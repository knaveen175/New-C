/*
Assignment : 13
Topic : Operator Overloading
03  ||       Consider a class Distance. 
            class Distance
            {
                    int km, m, cm;
                public:
                    //methods;
            };
    Overload the operator + to add two distance objects.

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
        Distance operator+ (Distance D)
        {
            Distance temp;
            temp.km = km + D.km;
            temp.m = m + D.m;
            temp.cm = cm + D.cm;
            return temp;
        }
};
int main()
{
    Distance d1(5, 720, 60), d2{2, 600, 45}, d3;
    d3 = d1 + d2;
    d1.showData();
    d2.showData();
    cout<<"Sum => ";
    d3.showData();
    return 0;
}