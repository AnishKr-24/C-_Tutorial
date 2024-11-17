

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
        for (int k = 1; k <= i; k++)
        {
            cout<<(char)(k+96);
        }
        cout<<endl;
    }
    return 0;
}