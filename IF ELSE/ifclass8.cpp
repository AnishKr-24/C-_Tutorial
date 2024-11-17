

//take positive integer input and tell if it is divisible by 5 and 3
//second methd


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number=";
    cin>>n;
    if (n%5==0 || n%3==0)   // ismai dono mai se koi ek true hua to run ho jayega
    {
       cout<<"Divisible by 5 and 3";
    }
    else
    {
       cout<<"Divisible by another number";
    }
    
    
}