
  // nhi solve hua
#include<iostream>
using namespace std;
int main()
{
    int n,x,reverse=0,sum;
    cout<<"Enter a number=";
    cin>>n;
    while (n!=0)
    {
        x = n % 10;
       
        reverse = reverse + x;
        reverse = reverse * 10 ;
        n = n/10;
        sum = n + reverse;
        
    }
    
    cout<<sum;
}