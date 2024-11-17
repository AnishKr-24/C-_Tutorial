

#include<iostream>
using namespace std;
void fun(int m)
{
    if(m==0)
        return;
    cout<<"good morning"<<endl;;
    fun(m-1);
}
int main()
{
    int n;
    cin>>n;
    fun(n);
}