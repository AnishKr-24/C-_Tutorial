
//triangle question 

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
    if ((a + b)>c && (b + c)>a && (c + a>b)) 
    {
       cout<<"valid triangle";
    }
    else
    {
       cout<<"not valid triangle";
    }
    
    
}