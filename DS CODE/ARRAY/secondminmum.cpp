 
 
//second minimum number


#include<iostream>
using namespace std;
int main()
{
    int a[] = {23,4,57,89,-4,56,78,9,-5666,68};
    int x = sizeof(a)/4;
    int minm = a[1];
    for (int  i = 0; i < x; i++)
    {
        minm  = min(minm ,a[i]);
    }
    int smin = a[1];
    for (int  i = 0; i < x; i++)
    {
        if (a[i]!=minm) smin = min(smin,a[i]);
    }
    cout<<smin;
    
}