

#include<iostream>
using namespace std;
int f(int n)
{
    if(n==1 || n==0)
        return 1;
    //int m=n*f(n-1);
    return n*f(n-1);
}
int main()
{
    int x;
    cout<<"Enter the Number:";
    cin>>x;
    cout<<"Answer of Factorial:"<<f(x);
}