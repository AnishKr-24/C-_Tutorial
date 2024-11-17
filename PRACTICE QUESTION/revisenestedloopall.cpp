


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= k; i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int j = n; j >= 1; j--)
    {
        for (int i = n; i >= n-j; i--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}