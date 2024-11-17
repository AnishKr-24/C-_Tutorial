

#include<iostream>
using namespace std;
int main()
{
    int prod=1,sum=0,sub,n;
    while (n!=0)
    {
        int digit = n%10;
        prod=prod*digit;
        sum=sum + digit;
        n=n/10;

    }
    int ans=prod-sum;
    return ans;
}