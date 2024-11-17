

#include<iostream>
using namespace std;
void poll(int x)
{
    if (x==0)
    {
        return;
    }
    poll(x-1);      // agar isko ult de to n to 1 ho jayega .
    cout<<x<<endl;  // agar isko ult de to n to 1 ho jayega .
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    poll(n);
    return 0;
}