


#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the  array of row=";
    cin>>n;
    cout<<"Enter the array of column=";
    cin>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the first array element=";
            cin>>a[i][j];
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            cout<<a[j][k]<<" ";
        }
        cout<<endl;
    }
    int x, y;
    cout<<"Enter the  array of row=";
    cin>>x;
    cout<<"Enter the array of column=";
    cin>>y;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<"Enter the second array of element=";
            cin>>arr[i][j];
        }
        
    }
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }
    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           sum[i][j] = a[i][j] + arr[i][j];
        }
        
    }
    cout<<"Sum of matrix="<<endl;;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<sum[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}