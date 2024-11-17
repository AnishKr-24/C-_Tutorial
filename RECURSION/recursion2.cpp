
//user input integer

#include<iostream>
using namespace std;
void aman(int n)
{
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    aman(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    aman(n);
    return 0;
}