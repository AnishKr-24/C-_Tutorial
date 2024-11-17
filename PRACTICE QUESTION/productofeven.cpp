

// even number ka multiple

#include<iostream>
using namespace std;
int main()
{
    int n ,ld,product=1;
    cout<<"Enter the number=";
    cin>>n;
    while (n > 0)
    {
        ld = n%10;
        if (n%2==0)
        {
        product = product*ld;
        }
        n=n/10;
    }
    cout<<product;
    
}