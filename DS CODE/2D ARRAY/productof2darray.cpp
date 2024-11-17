


#include<iostream>
using namespace std ;
int main()
{
    int n , m;
    cout<<"Enter the array of first row=";
    cin>>n;
    cout<<"Enter the array of first column=";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout<<"Enter the first array of element=";
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
    cout<<"First matrix="<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//second matrix
    int a , b;
    cout<<"Enter the array of Second row=";
    cin>>a;
    cout<<"Enter the array of Second  column=";
    cin>>b;
    int ar[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int  j = 0; j < b; j++)
        {
            cout<<"Enter the Second  array of element=";
            cin>>ar[i][j];
        }
        
    }
    cout<<endl;
    cout<<"Second matrix="<<endl; 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

// product of matrix start.

    int product[n][m];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
         product[i][j] += arr[i][j] *  ar[i][j];
       }
       
    }
    cout<<endl;
    cout<<"product of array="<<endl;
    // display of product matrix
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
         cout<<product[i][j]<<" ";
       }
       cout<<endl;
       
    }
    
    return 0;
}