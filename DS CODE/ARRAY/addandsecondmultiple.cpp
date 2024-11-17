


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array=";
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter the array of element=";
        cin>>a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            
            cout<<a[i]+10<<endl;
        }
         else
         cout<<a[i] * 2<<endl;

    }
        return 0;
}