/*
Assignment : 14
Topic : Operator Overloading, friend operator
04  ||       Consider the following class Array
            class Array
            {
                    int *p;
                    int size;
                public:
                    //methods
            };
        Define operator= to perform deep copy of Array objects.    

*/
#include<iostream>
using namespace std;

class Array
{
    private:
        int size, *p;
    public:
        void showData()
        {
            cout<<"Size = "<<size;
            cout<<" Elements = ";
            for (int i = 0 ; i < size ; i++)
            cout<<p[i]<<" ";
            cout<<endl;
        }
        Array()
        {
            size = 0;
            p = NULL;
        }
        Array(int a, int b[])
        {
            size = a;
            p = (int*) malloc (sizeof(int) * a);
            for (int i = 0 ; i < size ; i++)
                p[i] = b[i];
        }
        Array( Array &x)
        {
            size = x.size;
            p = (int*) malloc (sizeof(int) * size);
            for (int i = 0 ; i < size ; i++)
                p[i] = x.p[i];
        }
        ~Array()
        {
            free(p);
        }
};
int main()
{
    int s;
    cout<<"Enter Size: ";
    cin>>s;
    int e[s], i;
    cout<<"Enter "<<s<<" elements: ";
    for (i = 0; i < s; i++)
        cin>>e[i];
    Array a1(s, e), a2 = a1;
    a1.showData();
    a2.showData();
    return 0;
}