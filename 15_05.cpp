/*
Assignment : 15
Topic : Operator Overloading, friend operator
05  ||       Define a class Student with rollno, name and age as instance variables. Create setStudent() and showStudent() methods in the class. Overload operator== to compare two student objects.

*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int rollno, age;
        char name[40];
    public:
        void setStudent(int r, int a, char n[])
        {
            rollno = r;    age = a;
            strcpy(name, n);
        }
        void showStudent()
        {
            cout<<"Name - "<<name<<endl;
            cout<<"Age - "<<age<<", Roll No - "<<rollno<<endl;
        }
    friend bool operator== (Student, Student);
};
bool operator== (Student s1, Student s2)
{
    if ((s1.age == s2.age) && (s1.rollno == s2.rollno) && (strcmp(s1.name, s2.name) == 0))
        return true;
    else
        return false;
}
int main()
{
    Student s1, s2;
    int rollno, age, i;
    char name[40];
    cout<<"Student 1 Details -> "<<endl;
    cout<<"Enter Name: ";
    fgets(name, 40, stdin);
    for ( i = 0 ; name[i] ; i++)
        if (name[i] == '\n')
            name[i] = '\0';
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Age: ";
    cin>>age;
    s1.setStudent(rollno, age, name);
    
    cout<<"Student 2 Details -> "<<endl;
    getchar();
    cout<<"Enter Name: ";
    fgets(name, 40, stdin);
    for ( i = 0 ; name[i] ; i++)
        if (name[i] == '\n')
            name[i] = '\0';
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Age: ";
    cin>>age;
    s2.setStudent(rollno, age, name);

    s1.showStudent();
    s2.showStudent();
    if (s1 == s2)
        cout<<"Both Students have same details";
    else
        cout<<"Details are not Same";
    return 0;
}