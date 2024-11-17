



#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n , m;
    cout<<"Enter the First Array Size :";
    cin>>n;
    cout<<"Enter the Second Array Size :";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // cout<<"Matrix : "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout<<"Second minimum number : ";
    int smin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (smin > arr[i][j] && arr[i][j] != min)
            {
                smin = arr[i][j];
            }
        }
    }
    cout<<smin;
    return 0;
}
