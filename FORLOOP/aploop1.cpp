

//display this ap-1,3,5,7,9,------up ton'n'.
// ap loop
//An=a+(n-1)d  formula
//a=1,d=2
//An=1+(n-1)2
//An=2*n-1

#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter n =";
    cin>>n;
    for (int i = 1; i<=2*n-1; i+=2)
    {
       cout<<i<<" ";
    }
    
}