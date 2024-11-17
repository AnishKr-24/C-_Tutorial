


#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the first row number of matrix=";
    cin>>x;
    cout<<"Enter the first coloumn number of matrix=";
    cin>>y;
    int array[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<"Enter the first element of matrix=";
            cin>>array[i][j];
        }
        
    }
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }
    int c,d;
    cout<<"Enter the first row number of matrix=";
    cin>>c;
    cout<<"Enter the first coloumn number of matrix=";
    cin>>d;
    int a[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout<<"Enter the second element of matrix= ";
            cin>>a[i][j];
        }
        
    }
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < d; i++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    int product[x][y];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            product[i][j] = array[i][j] + a[i][j];
        }
        
    }
    cout<<"product of matrix= "<<endl;
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < d; i++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

    
}