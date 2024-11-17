


#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int power(int x , int n)
{
    if(n==1 && n==0)
        return x;
    if (n%2==0)
        return pow(x,n/2) *  pow(x,n/2);
    
    //else if (n%2==0)
    else
        return pow(x,n/2) *  pow(x,n/2) * x;
}
int main()
{
    int n ,m;
    cout<<"Enter the base:";
    cin>>n;
    cout<<"Enter the Exponent:";
    cin>>m;
    cout<<pow(n,m);
}