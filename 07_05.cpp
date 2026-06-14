/*
Assignment : 07
Topic : More on Functions in C++
05 ||       Define a function to merge two sorted arrays of same size.

*/
#include<iostream>
using namespace std;

void merge(int *, int *, int);
void sorting (int *, int);
int main()
{
    int a[30], b[30], c, i, j;
    cout<<"Enter number of values want to enter: ";
    cin>>c;
    cout<<"Enter "<<c<<" numbers: ";
    for ( i = 0 ; i < c ; i++)
        cin>>a[i];
    sorting(a, c);

    cout<<"Enter another "<<c<<" numbers: ";
    for ( i = 0 ; i < c ; i++)
        cin>>b[i];
    sorting(b, c);

    merge(a, b, c);
    return 0;
}
void merge( int *a, int *b, int c)
{
    int i, j, k, x[60];
    for ( i = 0 ,j = 0, k = 0 ; (i < 2*c) && (j < c || k < c) ; i++ )   
        if (a[j] < b[k])
        {
            x[i] = a[j];
            j++;
        }
        else
        {
            x[i] = b[k];
            k++;
        }
    cout<<"Merged & Sorted Array: ";
    for ( i = 0 ; i < 2*c ; i++)
    cout<<x[i]<<" ";
}
void sorting(int *x, int y)
{
    int i, j, temp;
    for (  i = 0 ; i < y ; i++)
        for (  j = i ; j < y ; j++)
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}