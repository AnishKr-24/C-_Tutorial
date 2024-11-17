
// second maximum number

#include<iostream>
using namespace std;
int main()
{
    int a[] = {23,4,57,89,-4,56,78,9,-5666,68};
    int x = sizeof(a)/4;
    int maxm = a[1];
    for (int  i = 0; i < x; i++)
    {
       maxm  = max(maxm ,a[i]);
    }
    int smax = a[1];
    for (int  i = 0; i < x; i++)
    {
        if (a[i]!=maxm) 
        smax = max(smax,a[i]);
    }
    cout<<smax;
    
}