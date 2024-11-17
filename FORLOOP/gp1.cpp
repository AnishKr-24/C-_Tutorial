

// display this gp-1,2,4,8,16,32------upto 'n' terms
//gp means multiple


#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter n =";
    cin>>n;
    int a =1;
    for (int i = 1; i<=n; i++)
    {
       cout<<a<<" ";
       a=a*2;
    }
    
}