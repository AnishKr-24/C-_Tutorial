
// 2d array of multiplication.
#include<iostream>
using namespace std;
int main()
{
    int m , n;
    cout<<"Enter the First Row size: ";
    cin>>m;
    cout<<"Enter the First col size: ";
    cin>>n;
    int p , q;
    cout<<"Enter the Second Row Size : ";
    cin>>p;
    cout<<"Enter the Second col Size : ";
    cin>>q;
    if (n==p)
    {
        int a[m][n];
        cout<<"Enter the element of 1st Matrix :"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            } 
        }
        int b[p][q];
        cout<<"Enter the element of 2nd Matrix :"<<endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin>>b[i][j];
            }
        }
        //Resultant Matrix.
        int resultant[m][q]; // Pahle Bale ka Row or Dusere bala ka col.
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // Multiple ka Part.
                // resultant[i][j] = a[i][0]*arr[0][j] + a[i][1]*arr[1][j] +....................
                resultant[i][j] =  0;
                for (int k = 0; k < p; k++)
                {
                    resultant[i][j] += a[i][k] * b[k][j];
                }
                
            }
            
        }
        cout<<"Answer of Multiplication : "<<endl;
        //Print kr rhe hai.
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<resultant[i][j]<<" ";   
            }
            cout<<endl;
        }
    }
    else{ // x != m
        cout<<"Cannot Multilpication The matrices : ";
    }
}