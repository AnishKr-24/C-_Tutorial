

//combination of factorial method using loop


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter the n=";
    cin>>n;
    cout<<"Enter the r=";
    cin>>r;
    int a=1;
    for (int i = 1; i <= n; i++)
    {
        a=a*i;
    }

    int b=1;
    for (int i = 1; i <= r; i++)
    {
        b=b*i;
    }
    
    int c=1;
    for (int i = 1; i <= n-r; i++)
    {
        c=c*i;
    }
    cout<<a/(b*c);

    return 0;
}