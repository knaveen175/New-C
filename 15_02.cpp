/*
Assignment : 15
Topic : Operator Overloading, friend operator
02  ||       Define a class Integer with instance variable of type int. Provide a friend logical operator!. Also define a friend operator == to compare two integer objects.

*/
#include<iostream>
using namespace std;

class Integer
{
    private:
        int a;
    public:
        void setData(int x)
        {
            a = x;
        }
        void showData()
        {
            cout<<"Integer = "<<a<<endl;
        }
    friend bool operator! (Integer);
    friend bool operator== (Integer, Integer);
};
bool operator! (Integer I)
{
    if (I.a)
        return false;
    else
        return true;        
}
bool operator== (Integer I1, Integer I2)
{
    if (I1.a == I2.a)
        return true;
    else
        return false;
}
int main()
{
    int a, b;
    cout<<"Enter an Integer: ";
    cin>>a;
    cout<<"Enter another Integer: ";
    cin>>b;
    Integer I1, I2;
    I1.setData(a);
    I2.setData(b);
    I1.showData();
    I2.showData();
    cout<<"!"<<a<<" = "<<!I1<<endl;
    cout<<"!"<<b<<" = "<<!I2<<endl;
    if (I1 == I2)
        cout<<"Both Integers are equal";
    else
        cout<<"The Integers are not equal";
    return 0;
}