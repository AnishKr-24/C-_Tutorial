
//take positive integer input and tell if it  is divisible by 5 or 3 but not divisible by 15

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number=";
    cin>>n;
    if ((n%5==0 or n%3==0) && (n % 15!=0))  
    {
       cout<<"Divisible by 5 or 3  and not 15";
    }
    else
    {
       cout<<"Divisible by another number";
    }
    
    
}