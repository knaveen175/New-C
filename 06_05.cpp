/*
Assignment : 06
Topic : More on Functions in C++
05 ||       Define a function to print all prime factors of a given number.[for example num = 36, prime factors are 2,3]

*/
#include<iostream>
using namespace std;

void factors(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factors(n);
    return 0;
}
void factors(int a)
{
    int i, j;
    cout<<"Prime Factors = ";
    for ( i = 2 ; a != 1 ; i++)
    {
        if (a % i == 0)
        {
            cout<<i<<" ";
            
            while(a % i == 0)
                a /= i;
        }
    }
}