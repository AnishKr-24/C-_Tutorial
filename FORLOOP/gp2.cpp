
// display ths gp-3,12,48,----up ton'n' term
// gp means multiple




#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter n =";
    cin>>n;
    int a =3;
    for (int i = 1; i<=n; i++)
    {
       cout<<a<<" ";
       a=a * 4;
    }
}