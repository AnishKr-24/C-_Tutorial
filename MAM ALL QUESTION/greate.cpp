

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number=";
    cin>>a>>b>>c;
    /*if (num>0)
    {
        cout<<"num is positive";
    }
    if (num==0)
    {
        cout<<"num is zero";
    }
    if (num<0)
    {
        cout<<"num is negative";
    }
    
   */
    if (a>b)
   { 
        cout<<"A is greater="<<a;
   }
    else if (b>c)
    {
        cout<<"B is greater="<<b;
    }
    else if (c>a)
    {
        cout<<"c is greater="<<c;
    }
    
    
    return 0;
    
}