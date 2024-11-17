

#include<iostream>
using namespace std;
void fun(int m)
{
    if(m==0)
        return;
    cout<<"hello Anish"<<endl;;
    fun(m-1);
}
int main()
{
    fun(4);
}