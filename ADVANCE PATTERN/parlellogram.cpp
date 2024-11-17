

// important question

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of rows=";
    cin>>x;
    for (int  i = 1; i <= x; i++)
    {
        for (int  k = 1; k <= x-i; k++)
        {
           cout<<" ";
        }
        for (int k = 1; k <= x; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}