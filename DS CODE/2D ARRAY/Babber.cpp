



#include<iostream>
using namespace std;
int main()
{
    int n , m;
    cout<<"Enter the n number of array : "<<endl;
    cin>>n;
    cout<<"Enter the n number of array : "<<endl;
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the element of array : ";
            //cin>>arr[i][j];
            cin>>arr[j][i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //cout<<arr[i][j]<<" ";
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}