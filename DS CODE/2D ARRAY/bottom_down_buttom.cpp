

// This is most Important question.
//matrix top to bottom and bottom to top answer in one array.

// 1 2 3 
// 4 5 6 
// 7 8 9 
//  1 4 7 8 5 2 3 6 9   output.

#include<iostream>
using namespace std;
int main()
{
    int n , m ;
    cout<<"Enter the array of size : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Matrix of Array : "<<endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int j = 0; j < m; j++) 
    {
        if (j % 2 == 0) 
        { // if even column
            for (int i = 0; i < n; i++) {
                cout << arr[i][j] << " ";
            }
        } 
        else { // if odd column
            for (int i = n - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}





