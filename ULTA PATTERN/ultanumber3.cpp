


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of column=";
    cin>>n;
    for (int i = 4; i <= n; i--)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}