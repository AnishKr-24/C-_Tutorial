

#include<iostream>
using namespace std;
int main()
{
    // int n1 = 4;
    // int n2 = 4;
    // cout<<&n1<<endl;
    // cout<<&n2;
    // int a = 16;
    // int* c = &a;
    // cout<<&a<<endl;
    // cout<<c;
    int n ,n1;
    cin>>n>>n1;
    
    int* p = &n;
    int* p1 = &n1;
    cout<<&n<<"   "<<&n1<<endl;
    //cout<<p<<"   "<<p1;
    cout<<"n ka address : "<<p<<"   "<<"n1 ka address : "<<p1;
}