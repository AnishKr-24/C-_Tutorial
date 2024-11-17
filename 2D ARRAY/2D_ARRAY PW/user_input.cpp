


#include<iostream>
using namespace std;
int main()
{
    int n , m;
    cout<<"Enter the Array of Row size : ";
    cin>>n;
    cout<<"Enter the Array of col size : ";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Matrix : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}