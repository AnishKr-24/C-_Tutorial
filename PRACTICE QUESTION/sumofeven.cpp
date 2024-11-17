
#include<iostream>
using namespace std;
int main()
{
    int n ,ld,sum=0;
    cout<<"Enter the number=";
    cin>>n;
    while (n > 0)
    {
        ld = n%10;
        if (n%2==0)
        {
        sum +=ld;
        }
        n=n/10;
    }
    cout<<sum;
    
}