

//Square Matrix ka use hota hai.
// Without Using another matrix and use same matrix.


#include<iostream>
using namespace std;
int main()
{
    int x ;
    cout<<"Enter the Row and col Size : ";
    cin>>x;
    int a[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // Transpose in the same matrix.
    cout<<"Transpose Of Matrix :"<<endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    // Display the Transpose.
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}