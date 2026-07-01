/*
Assignment : 17
Topic : Pointer, this, DMA
06  ||       In Question-5, define methods to convert string into uppercase, lowercase.

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
        void Uppercase()
        {
            int i;
            for (i = 0 ; p[i] ; i++)
                if (p[i] >= 'a' && p[i] <= 'z')
                    p[i] -= 32;
        }
        void Lowercase()
        {
            int i;
            for (i = 0 ; p[i] ; i++)
                if (p[i] >= 'A' && p[i] <= 'Z')
                    p[i] += 32;
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
    cout<<"Converted into Uppercase => "<<endl;
    s1.Uppercase();
    s1.showData();
    cout<<"Converted into Lowercase => "<<endl;
    s1.Lowercase();
    s1.showData();
    return 0;
}