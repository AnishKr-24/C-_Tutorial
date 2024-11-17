
//take positive integer input and tell if it is divisible by 5 and 3



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number=";
    cin>>n;
    if (n%5==0 && n%3==0)   //ismai dono cobition true rhega tab he run krega
    {
       cout<<"Divisible by 5 and 3";
    }
    else
    {
       cout<<"Divisible by another number";
    }
    
    
}