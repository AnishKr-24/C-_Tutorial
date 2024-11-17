


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
    // cout<<"Matrix First : "<<endl;
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < y; j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int m , n;
    cout<<"Enter the Second Row and Col Size : ";
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // cout<<"Matrix Second : "<<endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // Sum Process.
    int sum[x][y];

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                sum[i][j] = arr[i][j] + a[i][j];
            }
        }

        // Display the result
        cout << "Sum of the two arrays="<<endl;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
}