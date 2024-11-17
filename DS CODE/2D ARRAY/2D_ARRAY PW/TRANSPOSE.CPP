




#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the Row  Size : ";
    cin>>x;
    cout<<"Enter the Col Size : ";
    cin>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Of Matrix :"<<endl;
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}