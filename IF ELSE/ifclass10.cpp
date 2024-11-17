



//take three positive number input and the least of them


#include<iostream>
using namespace std;
int main()
{
    int a , b,c;
    cout<<"Enter the first side number=";
    cin>>a;
    cout<<"Enter the second side number=";
    cin>>b;
    cout<<"Enter the third side number=";
    cin>>c;
    if (a<b &&   a<c) 
    {
       cout<<" A number is least="<<a;
    }
    if (b<a &&   b<c) 
    {
       cout<<" B number is least="<<b;
    }
    else
    {
       cout<<" another number is not least="<<c;
    }
    
    
}