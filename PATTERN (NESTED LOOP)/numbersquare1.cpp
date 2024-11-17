

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the number of rows = ";
    cin>>m;
    for (int i = 1; i <= m; i++) // column
    {
        for (int  j = 1; j <= m; j++) //row
        {
            cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
    
}
