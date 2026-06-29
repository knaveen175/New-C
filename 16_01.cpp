/*
Assignment : 16
Topic : Pointer, this, DMA
01  ||       Define a class Person with name and age as instance variables. Provide parameterised constructors with two formal arguments name & age, to initialise instance variables.

*/
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[40];
        int age;
    public:
        void showData()
        {
            cout<<"Name- "<<name<<", Age- "<<age<<endl;
        }
        Person (char const name[], int age)
        {
            strcpy(this->name, name);
            this->age = age;
        }
};
int main()
{
    Person p1("Naveen", 20);
    p1.showData();
    return 0;
}