/*
Assignment : 12
Topic : Operator Overloading
04  ||       Define a class Matrix to represent 3x3 matrix. Provide appropriate instance methods. Also define operator+, operator-, operator* to perform addition, substraction and multiplication operations respectively.

*/
#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void setData(int b[3][3] )
        {
            int i, j;
            for (i = 0 ; i < 3 ; i++)
                for (j = 0 ; j < 3 ; j++)
                    a[i][j] = b[i][j];

        }
        void showData()
        {
            int i, j;
            for (i = 0 ; i < 3 ; i++)
            {
                for (j = 0 ; j < 3 ; j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
        Matrix operator+ (Matrix M)
        {
            Matrix temp;
            int i, j;
            for (i = 0 ; i < 3 ; i++)
                for (j = 0 ; j < 3 ; j++) 
                    temp.a[i][j] = a[i][j] + M.a[i][j];
            return temp;
        }
        Matrix operator- (Matrix M)
        {
            Matrix temp;
            int i, j;
            for (i = 0 ; i < 3 ; i++)
                for (j = 0 ; j < 3 ; j++) 
                    temp.a[i][j] = a[i][j] - M.a[i][j];
            return temp;
        }
        Matrix operator* (Matrix M)
        {
            Matrix temp;
            int i, j, k;
            for (i = 0 ; i < 3 ; i++)
                for (j = 0 ; j < 3 ; j++) 
                    temp.a[i][j] = 0;

            for (i = 0 ; i < 3 ; i++)
                for (j = 0 ; j < 3 ; j++) 
                    for (k = 0 ; k < 3 ; k++) 
                        temp.a[i][j] += a[i][k] * M.a[k][j];
            return temp;
        }
};
int main()
{
    int x[3][3], i, j;
    Matrix m1, m2, m3, m4, m5;
    cout<<"Enter elements of 1st Matrix: ";
    for ( i = 0 ; i < 3 ; i++)
        for ( j = 0 ; j < 3 ; j++)
            cin>>x[i][j];
    m1.setData(x);
    cout<<"Enter elements of 2nd Matrix: ";
    for ( i = 0 ; i < 3 ; i++)
        for ( j = 0 ; j < 3 ; j++)
            cin>>x[i][j];
    m2.setData(x);
    cout<<"1st Matrix => "<<endl;
    m1.showData();
    cout<<"2nd Matrix => "<<endl;
    m2.showData();
    cout<<"Addition => "<<endl;
    m3 = m1 + m2;
    m3.showData();
    cout<<"Substraction => "<<endl;
    m4 = m1 - m2;
    m4.showData();
    cout<<"Multiplication => "<<endl;
    m5 = m1 * m2;
    m5.showData();
    return 0;
}