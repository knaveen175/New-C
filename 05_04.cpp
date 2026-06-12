/*
Assignment : 05
Topic : Functions in C++
04 ||       Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

*/
#include<iostream>
using namespace std;

int find(int, int);
float find(float, float);
int main()
{
    int a, b;
    float x, y;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Maximum = "<<find(a,b)<<endl;

    cout<<"Enter two real numbers: ";
    cin>>x>>y;
    cout<<"Maximum = "<<find(x,y);
    return 0;
}
int find(int a, int b)
{
    if(a > b)
        return a;
    else    
        return b;
}
float find(float x, float y)
{
    if(x > y)
        return x;
    else    
        return y;
}