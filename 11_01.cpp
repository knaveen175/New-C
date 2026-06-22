/*
Assignment : 11
Topic : Constructor
01  ||       Define a class Numbers with size and arr pointer as instance variables. Provide constructor to initialise instance members, dynamically allocate an array of given size and store address in arr variable of object. Also define destructor to deallocate memory of array. Implement deep copy using copy instructor to avoid memory issues. 

*/
#include<iostream>
using namespace std;

class Numbers
{
    private:
        int size;
        int *p;
    public:
        void showData()
        {
            cout<<"Size = "<<size<<" Elements = ";
            for (int i = 0 ; i < size ; i++)
                cout<<p[i]<<" ";
            cout<<endl;
        }
        Numbers()
        {
            size = 0;
        }
        Numbers(int a)
        {
            size = a;
            p = (int*) malloc (a * sizeof(int));
            for (int i = 0 ; i < size ; i++)
                p[i] = 0;
        }
        Numbers(int a, int b)
        {
            size = a;
            p = (int*) malloc (a * sizeof(int));
            p[0] = b;
            for (int i = 1 ; i < size ; i++)
                p[i] = 0;
        }
        Numbers(int a, int b, int c)
        {
            size = a;
            p = (int*) malloc (a * sizeof(int));
            p[0] = b;
            p[1] = c;
            for (int i = 2 ; i < size ; i++)
                p[i] = 0;
        }
        Numbers (Numbers &N)
        {
            size = N.size;
            p = (int*) malloc (size * sizeof(int));
            for (int i = 0 ; i < size ; i++)
                p[i] = N.p[i];
        }
        ~Numbers()
        {
            free(p);
        }
};
int main()
{
    Numbers n1, n2(3), n3(4, 5), n4{5,2,4};
    Numbers n5 = n3;
    n1.showData();
    n2.showData();
    n3.showData();
    n4.showData();
    n5.showData();
    return 0;
}
/*
int *p;
p = (int*) malloc ( size * sizeof(int))
*/