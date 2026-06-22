/*
Assignment : 11
Topic : Constructor
03  ||       Define a class Date with d, m, y as instance variables Intialise members using initialisers. 

*/
#include<iostream>
using namespace std;

class Date
{
    private:
        int d, m, y;
    public:
    void showData()      
    {
        cout<<"Date - "<<d<<"/ "<<m<<"/ "<<y<<endl;
    }
    Date()
    {
        d = 1;  m = 1;  y = 2000;
    }
    Date(int a)
    {
        d = a;  m = 1;  y = 2000;
    }
    Date(int a, int b)
    {
        d = a;  m = b;  y = 2000;
    }
    Date(int a, int b, int c)
    {
        d = a;  m = b;  y = c;
    }
};
int main()
{
    Date d1, d2(5), d3(5, 7), d4(5, 7, 2004);
    d1.showData();
    d2.showData();
    d3.showData();
    d4.showData();
    return 0;
}