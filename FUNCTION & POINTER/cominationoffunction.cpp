
// comination using function

#include<iostream>
#include<cmath>
using namespace std;
int fact(int x)
{
    int f=1;
    for (int i = 1; i <= x; i++)
    {
        f=f*i;
    }
    return f;

    
}
int main()
{
    int n,r;
    cout<<"Enter the n=";
    cin>>n;
    cout<<"Enter the r=";
    cin>>r;
    int a= fact(n);
    int b= fact(r);
    int c= fact(n-r);
    cout<<a/(b*c);
    return 0;
}
