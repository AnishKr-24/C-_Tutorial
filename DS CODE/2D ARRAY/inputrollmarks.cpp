


#include<iostream>
using namespace std;
int main()
{
    int n ,m;
    cout<<"Enter the number of array in row=";
    cin>>n;
     cout<<"Enter the number of array in coloumn=";
    cin>>m;
    int rollmarks[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the array of element=";
            cin>>rollmarks[i][j];
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<rollmarks[j][i]<<" ";
        }
        cout<<endl;
        
    }
    
}