




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
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout<<"Second maximun number : ";
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (smax < arr[i][j] && arr[i][j] != max)
            {
                smax = arr[i][j];
            }
        }
    }
    cout<<smax;
    return 0;
}
