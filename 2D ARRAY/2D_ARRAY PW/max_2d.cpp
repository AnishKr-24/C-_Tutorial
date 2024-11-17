


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
    cout<<"Maximum Element : "<<endl;
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
    cout<<max;
    return 0;
}
