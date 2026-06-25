/*
Assignment : 13
Topic : Operator Overloading
05  ||       Consider the following class Array 
        class Array
        {
                int *p;
                int size;
            public:
                //methods
        };
            Define constructor to allocate an array of given size (size is given through parameter). Define a subscript operator to access element at given index. Define destructor to deallocates the memory of array.

*/
#include<iostream>
using namespace std;

class Array
{
    private:
        int *p;
        int size;
    public:
        Array()
        {
            size = 0;
            p = NULL;
        }
        Array( int a )
        {
            size = a;
            p = (int*) malloc ( sizeof(int)*a );
            for ( int i = 0; i < a ; i++)
                p[i] = 0;
        }
        Array( int a, int b )
        {
            size = a;
            p = (int*) malloc ( sizeof(int)*a );
            for ( int i = 0; i < a ; i++)
                p[i] = 0;
            p[0] = b;
        }
        Array( int a, int q[] )
        {
            size = a;
            p = (int*) malloc ( sizeof(int)*a );
            for ( int i = 0; i < a ; i++)
                p[i] = q[i];
        }
        ~Array()
        {
            free(p);
        }
        void showData()
        {
            cout<<"Size = "<<size<<endl;
            cout<<"Elements = ";
            for ( int i = 0; i < size ; i++)
                cout<<p[i]<<" ";
            cout<<endl;
        }
};
int main()
{
    int x;
    cout<<"Enter size: ";
    cin>>x;
    int p[x], i;
    cout<<"Enter "<<x<<" numbers: ";
    for ( i = 0; i < x ; i++)
        cin>>p[i];
    Array a1, a2(x), a3(x, 5), a4(x, p);
    a1.showData();    
    a2.showData();    
    a3.showData();    
    a4.showData();    
    return 0;
}