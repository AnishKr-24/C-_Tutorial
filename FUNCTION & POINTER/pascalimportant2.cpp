

//pascal most important question

#include<iostream>
#include<cmath>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=1; i<=x; i++)
    {
        f = f * i;
    }
    return f;

}

int ncr (int n,int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for (int  j = 0; j <= n-i-1; j++)    //  for (int  j = 0; j <= n-i-1; j++) ey bhi ek question hai
        {
            cout<<" ";
        }
        for (int  j = 0; j <= i; j++)
        {
            cout<<ncr(i,j)<<" "; //cout<<" * "; is se star print hoga
        }
        cout<<endl;

        
    }
    return 0;
}