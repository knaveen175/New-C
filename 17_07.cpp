/*
Assignment : 17
Topic : Pointer, this, DMA
07  ||       In Question-5, define methods to print string, return string, return length of string.

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
        ~String()
        {
            delete[] p;
        }
        int get_length()
        { return length; }
        char* get_Data()
        { return p; }
};
void printstring(int length,char* p)
{
        cout<<"Length - "<<length<<endl;
        cout<<"You Entered - ";
        for (int i = 0 ; i < length ; i++)
            cout<<p[i];
        cout<<endl;
}
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
    printstring(s1.get_length(), s1.get_Data());
    return 0;
}