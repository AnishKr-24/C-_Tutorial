

#include<iostream>
using namespace std;
int main()
{
    // input 1st matrix hai
    int n ,m ;
    cout<<"Enter the number of 1array in row=";
    cin>>n;
     cout<<"Enter the number of 1array in coloumn=";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the 1array of element=";
            cin>>arr[i][j];
        }
        
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
    //input 2nd matrix hai
    int  x, y;
    cout<<"Enter the number of 2array in row=";
    cin>>x;
    cout<<"Enter the number of 2array in coloumn=";
    cin>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<"Enter the 2array of element=";
            cin>>a[i][j];
        }
        
    }
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<a[j][i]<<"  ";
        }
        cout<<endl;
    }

// dono ka add kar rhe hai

        // Sum of the two arrays
        int sum[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum[i][j] = arr[i][j] + a[i][j];
            }
        }

        // Display the result
        cout << "Sum of the two arrays="<<endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}