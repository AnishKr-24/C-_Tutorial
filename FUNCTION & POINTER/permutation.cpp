
//permutation using function
//permutaiom=ncr=n!/r!(n-r)! formula


#include<iostream>
#include<cmath>
using namespace std;
int fact(int y)
{
    int f=1;
    for (int  i = 1; i <= y; i++)
    {
        f=f*i;
    }
    return f;
    
}
int main()
{
    int n;
    cout<<"Enter the n=";
    cin>>n;
    int r;
    cout<<"Enter the r=";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<a/b;
    return 0;
    
}