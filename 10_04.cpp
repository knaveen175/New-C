/*
Assignment : 10
Topic : Constructor
04  ||       Define a class Book with booked, title, price as intance member variables. Define non parameterised and parameterised constructers in the class.

*/
#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    private:
        char booked, title[30];
        int price;
    public:
        Book ()
        {
            booked = 'C'; strcpy (title, "N"); price = 0;
        }
        Book (char a)
        {
            booked = a; strcpy (title, "N"); price = 0;
        }
        Book (char a, const char t[])
        {
            booked = a; strcpy (title, t); price = 0;
        }
        Book (char a, const char t[], int p)
        {
            booked = a; strcpy (title, t); price = p;
        }
        void showStatus()
        {
            cout<<"Full Descriptions of Single Words  => "<<endl;
            cout<<"A = Available"<<endl;
            cout<<"N = Not Available"<<endl;
            cout<<"C = Can't Tell Right Now !"<<endl;
        }
        void showData()
        {
            cout<<"Booked Status = "<<booked<<", title = "<<title<<", Price = "<<price<<endl;
        }
};
int main()
{
    Book b1, b2('N'), b3('A', "C++ Language"), b4('A', "C++ Language", 150);
    b1.showStatus();
    b1.showData();
    b2.showData();
    b3.showData();
    b4.showData();
    return 0;
}
/*
Key =>
    strcpy( title, "Hello" );
*/