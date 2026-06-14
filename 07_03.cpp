/*
Assignment : 07
Topic : More on Functions in C++
03 ||       Define a function to print a substring from startindex(inclusive) to endindex(exclusive). Define function in such a way that if second argument is not provided, string will till the last possible index.

*/
#include<iostream>
#include<string.h>
using namespace std;

void print(char *, int, int = -1);
int main()
{
    char str[100];
    int a, b, i;
    cout<<"Enter a String: ";
    fgets(str, 100, stdin);
    for ( i = 0 ; str[i] ; i++)
        if(str[i] == '\n')
            str[i] = '\0';
    cout<<"If want to print to the end then enter endindex = -1"<<endl;
    cout<<"Enter startindex and endindex: ";
    cin>>a>>b;
    print(str, a, b);
    return 0;
}
void print(char *str, int a, int b)
{
    int i;
    if(b == -1)
        b = strlen(str);
    if ( a == b )
        cout<<"Error! Both Indices Same ";
    for ( i = a ; i < b ; i++)
        cout<<str[i];
}
