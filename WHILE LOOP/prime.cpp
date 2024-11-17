
// prime number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int flag=0;
    for (int i = 1; i <=n; i++)             
    {
        if (n%i==0)
        {
            flag++;
        }
    }
    if (flag==2)
    {
        cout<<"prime number";
    }
    else
    {
        cout<<" not prime number=";
    }
    return 0;
}