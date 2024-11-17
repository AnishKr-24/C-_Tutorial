

#include<iostream>
using namespace std;
int maxof(int a , int b , int c )
{
    if(a>b)  
    {
        return a ;
    }
    if (b>c)
    {
        return b;
    }
    else
    return c;
    

}
int main()
{
    int x , y ,z;
    cout<<"Enter the first number =";
    cin>>x;
    cout<<"Enter the second number =";
    cin>>y;
    cout<<"Enter the third number =";
    cin>>z;
    cout<<maxof(x,y,z);
    return 0;

}