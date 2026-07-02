/*
Assignment : 18
Topic : Inheritance
01  ||       Define a class Person with name and age as instance variables as private members. Provide setter and getter as protected methods. Derive a class Employee from Person class with private instance variable salary. Provide public methods setEmployee() and showEmployee().

*/
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[40];
        int age; 
    protected:
        void set_Age(int a)
        { age = a; }
        void set_Name(char n[])
        { strcpy(name, n); }
        int get_Age()
        { return age; }
        char* get_Name()
        { return name; }
};
class Employee: public Person
{
    private:
        int salary;
    public:
        void setEmployee(char n[], int a, int s)
        {
            set_Name(n);
            set_Age(a);
            salary = s;
        }
        int get_Salary()
        { return salary; }
        void showEmployee()
        {
            cout<<"Name- "<<get_Name()<<", Age- "<<get_Age()<<", Salary- "<<get_Salary()<<endl;
        }
};
int main()
{
    Employee e1;
    char n[40];
    int age, salary, i;
    cout<<"Enter Name: ";
    fgets(n, 40, stdin);
    for (i = 0 ; n[i] ; i++)
        if (n[i] == '\n')
            n[i] = '\0';
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Salary: ";
    cin>>salary;
    e1.setEmployee(n, age, salary);
    e1.showEmployee();
    return 0;
}