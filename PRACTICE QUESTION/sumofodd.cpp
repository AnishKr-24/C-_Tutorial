

#include<iostream>
using namespace std;
int main()
{
    int n ,x,sum=0;
    cout<<"Enter the number=";
    cin>>n;
    while (n > 0)
    {
        x = n%10;
        if (n%2!=0)
        {
        sum = sum+x;
        }
        n=n/10;
    }
    cout<<sum;
    
}