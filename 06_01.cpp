/*
Assignment : 06
Topic : More on Functions in C++
01 ||       Define a C++ function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.

*/
#include<iostream>
using namespace std;

void sorting(int*, int, bool=true);
int main()
{
    int a[100], x, n, i;
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for ( i = 0 ; i < n ; i++)
        cin>>a[i];
    cout<<"Enter (1)Ascending Order or (0)Descending Order: ";
    cin>>x;
    if(x)
    {
        cout<<"You had Choosen Ascending Order."<<endl;
        sorting(a, n);
    }
    else
    {
        cout<<"You had Choosen Descending Order."<<endl;
        sorting (a, n, false);
    }
    cout<<"Sorted Array: ";
    for ( i = 0 ; i < n ; i++)
        cout<<a[i]<<" ";
    return 0;
}
void sorting(int *a, int n, bool isAscending)
{
    int i, j, temp;
    if(isAscending)
    {  
        for ( i = 0; i < n-1; i++)
            for ( j = i+1; j < n; j++)
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
    else
        for ( i = 0; i < n-1; i++)
            for ( j = i+1; j < n; j++)
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
}