/*
Assignment : 18
Topic : Inheritance
04  ||       Define a class Shape with shapeName as instance variable. Provide setter and getter.

*/
#include<iostream>
#include<string.h>
using namespace std;

class Shape
{
    private:
        char shapeName[40];
    public:
        void setData(char shapeName[])
        {
            strcpy(this->shapeName, shapeName);
        }
        char* getData()
        {
            return shapeName;
        }
};
int main()
{
    Shape s1;
    char c[40];
    cout<<"Enter a shape name: ";
    fgets(c, 40, stdin);
    s1.setData(c);
    cout<<"Your Entered -> "<<s1.getData();
    return 0;
}