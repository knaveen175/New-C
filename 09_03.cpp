/*
Assignment : 09
Topic : member functions
03 ||       Define a class TestResult with properties rollno, right, wrong, net_score. Also define class properties right_weightage, wrong_weightage. Provide methods to set and get all the properties.

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
            cout<<"Right Weightage = "<<right_weightage<<", Wrong Weightage = "<<wrong_weightage;
        }
};
float TestResult::right_weightage;
float TestResult::wrong_weightage;

int main()
{
    TestResult c1;
    int a, b, c;
    float d, x, y;
    cout<<"Enter Right Weightage: ";
    cin>>x;
    cout<<"Enter Wrong Weightage: ";
    cin>>y;
    cout<<"Enter Roll no: ";
    cin>>a;
    cout<<"Enter number of right questions: ";
    cin>>b;
    cout<<"Enter number of wrong questions: ";
    cin>>c;
    cout<<"Enter Net Score: ";
    cin>>d; 
    c1.setData(a, b, c, d);
    c1.showData();
    c1.set_weightage(x, y);
    c1.show_weightage();
    return 0;
}