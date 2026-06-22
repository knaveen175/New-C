/*
Assignment : 11
Topic : Constructor
04  ||       Define a class Room for a hotel management project with room number, room type, is_AC, price as instance variables. Initialise instance variables using constructor. 

*/
#include<iostream>
#include<string.h>
using namespace std;

class Room
{
    private:
        int roomnumber, price;
        char roomtype[10], is_AC[10];
    public:
        void showData()
        {
            cout<<"Room No. - "<<roomnumber<<", Room Type - "<<roomtype<<", Is_AC = "<<is_AC<<", Price = "<<price<<" Rs."<<endl;
        }
        Room(int a, int b, const char r[], const char AC[])
        {
            roomnumber = a; price = b;
            strcpy(roomtype, r); strcpy(is_AC, AC);
        }
};
int main()
{
    Room r1(15, 12000, "Double", "No"), r2(17, 18000, "Triple", "Yes");
    r1.showData();
    r2.showData();
    return 0;
}
