



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
    cout<<"Minimum Number of matrix : ";
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
    cout<<min;
    return 0;
}
