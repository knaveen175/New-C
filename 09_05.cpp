/*
Assignment : 09
Topic : member functions
05 ||       Define a class Matrix to represent a 3x3 order matrix. Provide Appropriate methods and properties to the class. Also define following methods in the class.
    1.  Matrix add(Matrix)
    2.  Matrix sub(Matrix)
    3.  Matrix multiply(Matrix)
    4.  Matrix transpose()
    5.  bool is_singular()

*/
#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void setmatrix (int x[][3])
        {
            int i, j;
            for ( i = 0 ; i < 3 ; i++)
                for ( j = 0 ; j < 3 ; j++)
                    a[i][j] = x[i][j];
        }
        Matrix Add (Matrix x)
        {
            Matrix temp;
            int i, j;
            for ( i = 0 ; i < 3 ; i++)
                for ( j = 0 ; j < 3 ; j++)
                    temp.a[i][j] = a[i][j] + x.a[i][j];
            return temp;
        }
        Matrix Sub (Matrix x)
        {
            Matrix temp;
            int i, j;
            for ( i = 0 ; i < 3 ; i++)
                for ( j = 0 ; j < 3 ; j++)
                    temp.a[i][j] = a[i][j] - x.a[i][j];
            return temp;
        }
        Matrix Multiply (Matrix x)
        {
            Matrix temp;
            int i, j, k;
            for ( i = 0 ; i < 3 ; i++)
                for ( j = 0 ; j < 3 ; j++)
                {
                    temp.a[i][j] = 0;
                    for ( k = 0 ; k < 3 ; k++ )
                        temp.a[i][j] += a[i][k] * x.a[k][j];
                }
            return temp;
        }
        Matrix Transpose ()
        {
            Matrix temp;
            int i, j;
                for ( i = 0 ; i < 3 ; i++)
                    for ( j = 0 ; j < 3 ; j++)
                        temp.a[i][j] = a[j][i];
            return temp;
        }
        bool is_singular()
        {
            int det;
            det =  ( a[0][0] * ( a[1][1]*a[2][2] - a[1][2]*a[2][1] )
                   - a[0][1] * ( a[1][0]*a[2][2] - a[2][0]*a[1][2] ) 
                   + a[0][2] * ( a[1][0]*a[2][1] - a[2][0]*a[1][1] )) ;
            return det;
        }
        void showmatrix()
        {
            int i, j;
            for ( i = 0 ; i < 3 ; i++)
                {
                    for ( j = 0 ; j < 3 ; j++)
                        cout<<a[i][j]<<" ";
                    cout<<endl;
                }
            cout<<endl;
        }
};
int main()
{
    Matrix M1, M2, M3, M4, M5, M6;
    int x[3][3], i, j;
    cout<<"Enter Elements of Matrix 1: ";
    for ( i = 0 ; i < 3 ; i++)
        for ( j = 0 ; j < 3 ; j++)
            cin>>x[i][j];
    M1.setmatrix (x);
    cout<<"Enter Elements of Matrix 2: ";
    for ( i = 0 ; i < 3 ; i++)
        for ( j = 0 ; j < 3 ; j++)
            cin>>x[i][j];
    M2.setmatrix (x);
    M3 = M1.Add(M2);
    M4 = M1.Sub(M2);
    M5 = M1.Multiply(M2);
    M6 = M1.Transpose();
    cout<<"Matrix 1: "<<endl;
    M1.showmatrix();
    cout<<"Matrix 2: "<<endl;
    M2.showmatrix();
    cout<<"Addition => "<<endl;
    M3.showmatrix();
    cout<<"Substraction => "<<endl;
    M4.showmatrix();
    cout<<"Multiplication => "<<endl;
    M5.showmatrix();
    cout<<"Transpose of 1st Matrix => "<<endl;
    M6.showmatrix();
    if (M1.is_singular())
        cout<<"Non Singular Matrix";
    else    
        cout<<"Singular Matrix";
    return 0;
}