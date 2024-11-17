


#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the First Row size: ";
    cin>>x;
    cout<<"Enter the First Row size: ";
    cin>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin>>a[i][j];
        }
    }
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < y; j++)
    //     {                              // matrix  bane ke liye
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<"Wave the matrix : "<<endl;
    for (int i = x-1; i >= 0; i--)
    {
        if (i % 2 ==0)
        {
            for (int j = 0; j < y; j++)
            {
                cout<<a[i][j]<<" ";
            }
            
        }
        else
        {
            for (int j = y-1 ; j >= 0; j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        //cout<<endl;  -- isko lagne se matrix ayega berna linear form main ayega.
    }
    
}