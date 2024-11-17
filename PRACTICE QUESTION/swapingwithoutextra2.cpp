


#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the first number=";
    cin>>x;
    cout<<"Enter the second number=";
    cin>>y;
    cout<<"not swap="<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"swap number="<<x<<" "<<y<<endl;
    int sum = 0;
    sum = x + y;
    cout<<"swap add="<<sum<<endl;
    return 0;
}