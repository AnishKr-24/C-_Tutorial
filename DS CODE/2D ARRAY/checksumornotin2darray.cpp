
// 2d array main check the sum or not

#include<iostream>
using namespace std;
int main()
{
    int n ,m ;
    cout<<"Enter the number of First array in row=";
    cin>>n;
     cout<<"Enter the number of First array in coloumn=";
    cin>>m;
    int arr[n][m];
    // row ke liye.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the First array of element=";
            cin>>arr[i][j];
        }
        
    }
    // column ke liye.
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
    int  x, y;
    cout<<"Enter the number of Second array in row=";
    cin>>x;
    cout<<"Enter the number of Second array in coloumn=";
    cin>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<"Enter the Second array of element=";
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
if (n == x && m == y) {
        // Sum of the two arrays
        int result[n][m] ;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                result[i][j] = arr[i][j] + a[i][j];
            }
        }

        // Display kra rhe hai add ko
        cout << "Sum of the two arrays:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        cout<<"Array is valid=";
    } 
    else 
    {
        cout << "Arrays cannot be added." << endl;
    }

    return 0;
}