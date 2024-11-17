
//most imortant question. Reverse Array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array of size : ";
    cin>>n;
    int a[n];
    for (int i =0; i<n; i++) {
        cin>>a[i];
    }
    n = sizeof(a)/4;
    int b[n];
    for (int i = 0; i<n; i++) 
    {
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }
    return 0;
}





