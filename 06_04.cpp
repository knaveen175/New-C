/*
Assignment : 06
Topic : More on Functions in C++
04 ||       Define a function to calculate LCM of three numbers.

*/
#include<iostream>
using namespace std;

int LCM(int, int, int);
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"LCM = "<<LCM(a, b, c);
    return 0;
}
int LCM(int a, int b, int c)
{
    int i;
    if (a == 0 || b == 0 || c == 0)
        return 0;
    for ( i = 1; ; i++)
    {
        if (( i % a == 0 ) && ( i % b == 0) && ( i % c == 0))
            return i;
    }
}