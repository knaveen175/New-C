/*
Assignment : 17
Topic : Pointer, this, DMA
05  ||       Define a class String with char pointer and length of a string as instance member variables. Define a method to dynamically create an array of char type and hold the input string in such a way that the array length is just enough to accomodate the input string.

*/
#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
        char *p;
        int length;
    public:
        void setData(int l, char q[])
        {
            length = l;
            p = new char[length + 1];
            strcpy(p, q);
        }
        void showData()
        {
            cout<<"Length - "<<length<<endl;
            cout<<"You Entered - ";
            for (int i = 0 ; i < length ; i++)
                cout<<p[i];
            cout<<endl;
        }
        ~String()
        {
            delete[] p;
        }
};
int main()
{   
    char a[100];
    int i;
    cout<<"Enter a String: ";
    fgets( a, 100, stdin);
    for ( i = 0 ; a[i] ; i++)
        if (a[i] == '\n')
            a[i] = '\0';
    String s1;
    s1.setData(strlen(a), a);
    s1.showData();
    return 0;
}