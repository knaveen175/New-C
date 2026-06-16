/*
Assignment : 08
Topic : Classes and Objects
04 ||       In previous question(question no 3), define a methods to display date in the following pattern
        (1)     31-12-2022
        (2)     31-Dec-2022    

*/
#include<iostream>
using namespace std;

class Date
{
    int date, month, year;
    public:
    void setdate(int d, int m, int y)
    {
        date = d;
        month = m;
        year = y;
    }
    void getdate()
    {
        cout<<"Date = "<<date<<"-"<<month<<"-"<<year<<endl;
        cout<<"Date = "<<date<<"-";
        switch (month)
        {
        case 1:
            cout<<"Jan";break;
        case 2:
            cout<<"Feb";break;
        case 3:
            cout<<"Mar";break;
        case 4:
            cout<<"Apr";break;
        case 5:
            cout<<"May";break;
        case 6:
            cout<<"Jun";break;
        case 7:
            cout<<"Jul";break;
        case 8:
            cout<<"Aug";break;
        case 9:
            cout<<"Sep";break;
        case 10:
            cout<<"Oct";break;
        case 11:
            cout<<"Nov";break;
        case 12:
            cout<<"Dec";break;
        }
        cout<<"-"<<year;
    }
};
int main()
{
    int a, b, c;
    cout<<"Enter Date (date month year): ";
    cin>>a>>b>>c;
    Date d;
    d.setdate(a, b, c);
    d.getdate();
    return 0;
}