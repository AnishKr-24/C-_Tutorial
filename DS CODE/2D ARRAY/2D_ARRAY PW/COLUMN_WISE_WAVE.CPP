



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
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<a[i][j]<<" ";
        }
        //cout<<endl;
    }
    
}