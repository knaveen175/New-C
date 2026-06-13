/*
Assignment : 06
Topic : More on Functions in C++
03 ||       Define a function to rotate an arrray by n positions in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1.

*/
#include<iostream>
using namespace std;

void rotate (int*, int, int = 1, int = 1);
int main()
{
    int a[100], x, i, n, d;
    cout<<"Enter number of values you want to enter: ";
    cin>>x;
    cout<<"Enter "<<x<<" values: ";
    for ( i = 0 ; i < x ; i++)
        cin>>a[i];
    cout<<"Enter how much position you want to rotate: ";
    cin>>n;
    cout<<"Enter (-1) for Left Direction and (1) for Right Direction :";
    cin>>d;
    rotate(a, x, d, n);
    for ( i = 0 ; i < x ; i++)
        cout<<a[i]<<" ";
    return 0;
}
void rotate(int *a, int x, int d, int n)
{
    int i, j, temp;
    if (d == -1)
    {    
        for ( i = 0 ; i < n ; i++)
            for ( j = 0 ; j < x-1 ; j++)
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
    if (d == 1)
    {    
        for ( i = 0 ; i < n ; i++)
            for ( j = x-1 ; j > 0 ; j--)
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
    }
}