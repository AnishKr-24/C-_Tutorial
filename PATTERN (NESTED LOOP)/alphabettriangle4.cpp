


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows=";
    cin>>n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout<<(char)(x+96)<<" ";
        }
        cout<<endl;
        
    }
    
}