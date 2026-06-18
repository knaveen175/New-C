/*
Assignment : 09
Topic : member functions
04 ||       Write a drive function main() to use TestResult class(Question 3). Create an array to 5 TestResult objects, set values to all objects and display the results in sorted order (by net_score).

*/
#include<iostream>
using namespace std;

class TestResult
{
    private:
        int rollno, right, wrong;
        float net_score;
        static float right_weightage, wrong_weightage;
    public:
        float Calculatenetscore(int a, int b)
        {
            return (right_weightage*a - wrong_weightage*b);
        }
        void setData(int p, int q, int r, float s)
        {
            rollno = p; right = q; wrong = r; net_score = s;
        }
        static void set_weightage(float x, float y)
        {
            right_weightage = x;
            wrong_weightage = y;
        }
        void showData()
        {
            cout<<"A student whose roll no: "<<rollno<<", Right = "<<right<<" ,Wrong = "<<wrong<<" ,Net_score = "<<net_score<<endl;
        }      
        void show_weightage()
        {
            cout<<"Right Weightage = "<<right_weightage<<", Wrong Weightage = "<<wrong_weightage<<endl;
        }
        void sorting (TestResult *z)
        {
            int i, j;
            TestResult temp;
            for ( i = 0 ; i < 5 ; i++)
                for ( j = i ; j < 5 ; j++)
                    if (z[i].net_score > z[j].net_score)
                    {
                        temp = z[i];
                        z[i] = z[j];
                        z[j] = temp;
                    }
        }
};
float TestResult::right_weightage;
float TestResult::wrong_weightage;
int main()
{
    TestResult z[5];
    int a, b, c, i;
    float x, y, n;
    cout<<"Enter Right Weightage: ";
    cin>>x;
    cout<<"Enter Wrong Weightage: ";
    cin>>y;
    z[0].set_weightage(x,y);
    for (i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter Roll no: ";
        cin>>a;
        cout<<"Enter Number of Right Question: ";
        cin>>b;
        cout<<"Enter Number of Wrong Question: ";
        cin>>c;
        n = z[i].Calculatenetscore(b, c);
        z[i].setData(a, b, c, n);
    }
    z[0].show_weightage();
    z[0].sorting(z);
    for ( i = 0 ; i < 5 ; i++ )
        z[i].showData();
    return 0;
}