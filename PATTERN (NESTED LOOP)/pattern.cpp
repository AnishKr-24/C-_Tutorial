


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)   // n ke jagah i krne se triangle banega.
        {
           cout<<count<<" ";
           count++;
        }
        cout<<endl;
    }
    
}