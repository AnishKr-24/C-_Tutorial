

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the 1array of row=";
    cin>>n;
    cout<<"Enter the 1array of column=";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<"Enter the element of array=";
          cin>>arr[i][j];
        }
        
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
           cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    int x,y;
    cout<<"Enter the 2array of row=";
    cin>>x;
    cout<<"Enter the 2array of column=";
    cin>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
           cout<<"Enter the element of array=";
          cin>>a[i][j];
        }
        
    }
    
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}