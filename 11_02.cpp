/*
Assignment : 11
Topic : Constructor
02  ||       Define a class Student and write a program to enter student details using constructor and define member function to display all details. 

*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char Name[30], Section;
        int Class, Rollno;
    public:
        void showData()
        {
            cout<<"Name = "<<Name<<" Class = "<<Class<<" "<<Section<<"  Roll no = "<<Rollno<<endl;
        }
        Student()  
        {
            strcpy(Name, "Not Available");
            Class = 0; Section = 'N'; Rollno = 0;
        }
        Student(const char p[])  
        {
            strcpy(Name, p);
            Class = 0; Section = 'N'; Rollno = 0;
        }
        Student(const char p[], int x)  
        {
            strcpy(Name, p);
            Class = x; Section = 'N'; Rollno = 0;
        }
        Student(const char p[], int x, char q)  
        {
            strcpy(Name, p);
            Class = x; Section = q; Rollno = 0;
        }
        Student(const char p[], int x, char q, int y)  
        {
            strcpy(Name, p);
            Class = x; Section = q; Rollno = y;
        }
};

int main()
{
    Student s1, s2("AKTU"), s3("AKTU", 12), s4("AKTU", 12, 'A'), s5("AKTU", 12, 'A', 25);
    s1.showData();
    s2.showData();
    s3.showData();
    s4.showData();
    s5.showData();
    return 0;
}
/*
use of const keyword 
*/