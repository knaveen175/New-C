/*
Assignment : 10
Topic : Constructor
02  ||       Define a class Customer with instance members cust_id, name, email, mobile. Define non parameterised constructor and parameterised constructor in the class.

*/
#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
    private:
        int cust_id;
        long long mobile;
        char name[30], email[30];
    public:
        Customer()
        {
            cust_id = 0; name[0] = '\0'; email[0] = '\0'; mobile = 0;
        }
        Customer(int a)
        {
            cust_id = a; name[0] = '\0'; email[0] = '\0'; mobile = 0;
        }
        Customer(int a, const char c[])
        {
            cust_id = a; strcpy(name, c); email[0] = '\0'; mobile = 0;
        }
        Customer(int a, const char c[], const char e[])
        {
            cust_id = a; strcpy(name, c); strcpy(email, e); mobile = 0;
        }
        Customer(int a, const char c[], const char e[], long long mo)
        {
            cust_id = a; strcpy(name, c); strcpy(email, e); mobile = mo;
        }
        void showData()
        {
            cout<<"Customer Id: "<<cust_id<<"\tName: "<<name<<"\tEmail = "<<email<<"\tMobile = "<<mobile<<endl;
        }
};
int main()
{
    Customer c1, c2(39), c3(39, "Hello"), c4(39, "Hello", "abcmaurya175@gmail.com"),
    c5(39, "Hello", "abcmaurya175@gmail.com", 9876543210);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    c5.showData();
    return 0;
}
/*
1.  const Keyword
2.  long long
*/