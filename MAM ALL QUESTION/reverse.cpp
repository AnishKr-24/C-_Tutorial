


#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem;
    cout<<"Enter the number=";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        rev=rem+ rev * 10;
        n=n/10;
        
    }
    cout<<"result of reverse="<<rev<<endl;
    return 0;
}