/*
Assignment : 06
Topic : More on Functions in C++
02 ||       Define a function to sort an array of strings in ascending or descending order depending upon bool type argument(true for ascending and false for descending) Use default argument to implement it.

*/
#include<iostream>
#include<string.h>
using namespace std;

void sorting(char[][50], int, bool = true);
int main()
{
    char a[30][50];
    int n, i, j, x;
    cout<<"Enter number of String: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter "<<n<<" Strings: ";
    for ( i = 0 ; i < n ; i++)
        fgets(a[i], 50, stdin);
    // if we wanna remove the line 18 i.e., cin.ignore() we have to use cin.getline(a[i], 50) instead of fgets line.
    for ( i = 0 ; i < n ; i++)
        for ( j = 0 ; a[i][j] ; j++)
            if (a[i][j] == '\n')
                a[i][j] = '\0';
    cout<<"Enter (1) Ascending Order or (0) Descending Order: ";
    cin>>x;
    if (x)
    {
        cout<<"Ascending Order Chosen !"<<endl;
        sorting(a, n);
    }
    else
    {
        cout<<"Descending Order Chosen !"<<endl;
        sorting(a, n, false);
    }
    for ( i = 0 ; i < n ; i++)
        cout<<a[i]<<endl;
    return 0;
}
void sorting(char a[][50], int n, bool isAscending)
{
    int i, j, k, x;
    char temp[50];
    for ( i = 0 ; i < n ; i++)
        for ( j = 0 ; a[i][j] ; j++)
        {
            if(a[i][j] >= 'a' && a[i][j] <= 'z')
                a[i][j] -= 32;
        }
    if (isAscending)
    {
        for ( i = 0 ; i < n-1 ; i++)
            for ( j = i+1 ; j < n ; j++)
            {
                x = strcmp(a[i], a[j]);
                if(x > 0)
                {
                    strcpy(temp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],temp);
                }
            }
    }
    else
    {
        for ( i = 0 ; i < n-1 ; i++)
            for ( j = i+1 ; j < n ; j++)
            {
                x = strcmp(a[i], a[j]);
                if(x < 0)
                {
                    strcpy(temp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],temp);
                }
            }
    }
}