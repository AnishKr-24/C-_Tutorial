

#include<iostream>
using namespace std;
int main()
{
    int n ,x,product=1;
    cout<<"Enter the number=";
    cin>>n;
    while (n > 0)
    {
        x = n%10;
        if (n%2!=0)
        {
       product=product*x;
        }
        n=n/10;
    }
    cout<<product;
    
}