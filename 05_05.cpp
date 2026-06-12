/*
Assignment : 05
Topic : Functions in C++
05 ||       Write functions using function overloading to add two numbers having different data types.

*/
#include<iostream>
using namespace std;

float add(int, float);
double add(float, double);
double add(int, double);
int main()
{
    int a;
    float b;
    double c;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Enter a real number: ";
    cin>>b;
    cout<<"Enter another real number: ";
    cin>>c;
    cout<<"Sum of "<<a<<" and "<<b<<" = "<<add(a,b)<<endl;
    cout<<"Sum of "<<b<<" and "<<c<<" = "<<add(b,c)<<endl;
    cout<<"Sum of "<<a<<" and "<<c<<" = "<<add(a,c);
    return 0;
}
float add(int a, float b)
{
    return a+b;   
}
double add(float b, double c)
{
    return b+c;   
}
double add(int a, double c)
{
    return a+c;   
}