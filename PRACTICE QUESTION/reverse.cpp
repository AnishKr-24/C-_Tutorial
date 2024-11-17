
#include<iostream>
using namespace std;
int main()
{
    int n,x,reverse=0;
    cout<<"Enter a number=";
    cin>>n;
    while (n!=0)
    {
        x = n % 10;
        reverse = reverse * 10;
        reverse = reverse + x;
        n = n/10;
    }
    cout<<reverse;
}