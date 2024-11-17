


#include<iostream>
using namespace std;
int main()
{
    int n ,m ;
    cout<<"Enter the number of array in row=";
    cin>>n;
     cout<<"Enter the number of array in coloumn=";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the array of element=";
            cin>>arr[i][j];
        }
        
    }
    cout<<"Matrix of array="<<endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
    // transpose start
    int transpose[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = arr[j][i];
        }
    }
    cout << "Transpose of Matrix=" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}