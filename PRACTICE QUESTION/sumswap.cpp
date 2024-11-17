

// swapping add in input;


#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter the first number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    int sum = 0;
    sum = a+b;
    cout<<"Sum ="<<sum<<endl;
    return 0;
}