/*
Assignment : 14
Topic : Operator Overloading, friend operator
05  ||       In Question-4 define a friend operator+ to concatenate two Array objects.

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
        ~Array()
        {
            free(p);
        }
        friend Array operator+ (Array&, Array&);
};
Array operator+ (Array& a1, Array& a2)
{
    Array temp;
    int i, j;
    temp.size = a1.size + a2.size;
    temp.p = (int*) malloc (sizeof(int)* temp.size);
    for (i = 0 ; i < a1.size ; i++)
        temp.p[i] = a1.p[i];
    for (j = 0 ; j < a2.size ; j++)
    {   
        temp.p[i] = a2.p[j];
        i++;
    }
    return temp;
}
int main()
{
    int s, t, i;
    cout<<"Enter Size: ";
    cin>>s;
    int e[s];
    cout<<"Enter "<<s<<" elements: ";
    for (i = 0; i < s; i++)
        cin>>e[i];
    Array a1(s, e);

    cout<<"Enter Size: ";
    cin>>t;
    int f[t];
    cout<<"Enter "<<t<<" elements: ";
    for (i = 0; i < t; i++)
        cin>>f[i];
    Array a2(t, f);
    Array a3 = (a1 + a2);
    a1.showData();
    a2.showData();
    a3.showData();
    return 0;
}
/*
Reference Variable (less power than pointer)

*/