/*
Assignment : 10
Topic : Constructor
01  ||       Define a class Cuboid with length, breadth and height as instance member variables. Define constructors to initialise instance member variables

*/
#include<iostream>
using namespace std;

class Cuboid
{
    private:
        int length, breadth, height;
    public:
        void setData(int l, int b, int h)
        {
            length = l; breadth = b; height = h;
        }
        void showData()
        {
            cout<<"Length = "<<length<<" Breadth = "<<breadth<<" Height = "<<height<<endl;
        }
        Cuboid()
        {
            length = 0; breadth = 0; height = 0;
        }
};
int main()
{
    Cuboid c1;
    int x, y, z;
    c1.showData();
    cout<<"Enter Length, Breadth and Height of Cuboid: ";
    cin>>x>>y>>z;
    c1.setData(x, y, z);
    c1.showData();
    return 0;
}