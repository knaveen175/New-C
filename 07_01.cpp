/*
Assignment : 07
Topic : More on Functions in C++
01 ||       Define a function to calculate HCF of two numbers.

*/
#include<iostream>
using namespace std;

int HCF(int, int);
int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"HCF = "<<HCF(a, b);
    return 0;
}
int HCF(int a, int b)
{
    int i, x;
    if (a == 0 && b != 0)
        return b;
    else if (b == 0 && a != 0)
        return a;
    if (a > b)
        x = b;
    else
        x = a;
    for (i = x ; i > 0 ; i--)
        if ((a % i == 0) && (b % i == 0))
            return i;
}