

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element=";
    cin>>n;
    int a[n] ;
    for (int i = 0; i < n; i++)
    {
       cout<<"Enter the array=";
       cin>>a[i];
    }
    
    int x = 5;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (a[i]>x)
        {
            count++;
            cout<<a[i]<<endl;
        }
        
    }
    
}