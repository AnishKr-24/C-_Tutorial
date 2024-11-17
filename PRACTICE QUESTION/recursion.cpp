



#include<iostream>
using namespace std;
void decreasing(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl; //cout<<" * "<<endl; is se star print hoga
    decreasing(n-1);
}
void increasing(int x)
{
    if(x==0)
    {
        return ;
    }
    increasing(x-1);
    cout<<x<<endl; //cout<<"*"<<endl;
    
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    decreasing(n);
    increasing(n);

    return 0;
}