/*
Assignment : 07
Topic : More on Functions in C++
04 ||       Define a function to swap two arrays.

*/
#include<iostream>
using namespace std;

void swap(int*, int*, int);
int main()
{
    int a[100], b[100], n, i;
    cout<<"Enter number of values in the Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for ( i = 0 ; i < n ; i++)
        cin>>a[i];

    cout<<"Enter another "<<n<<" numbers: ";
    for ( i = 0 ; i < n ; i++)
        cin>>b[i];

    swap(a, b, n);
    cout<<" Array's Swapped Successfully"<<endl;
    cout<<"1st Array => ";
    for ( i = 0 ; i < n ; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"2nd Array => ";
    for ( i = 0 ; i < n ; i++)
        cout<<b[i]<<" ";
    return 0;
}
void swap(int *a, int *b, int x)
{
    int i, p[100];
    for( i = 0 ; i < x ; i++)
        p[i] = a[i];
    for( i = 0 ; i < x ; i++)
        a[i] = b[i];
    for( i = 0 ; i < x  ; i++)
        b[i] = p[i];    
}