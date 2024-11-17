#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number=";
    cin>>n;
    (n % 2 == 0 ) ? 
    cout<<"even="<<n<<endl:
    cout<<"odd="<<n;
    /*n  > 0 ? 
    cout<<"Positive="<<n<<endl:
    cout<<"Negative="<<n;
    */
    return 0;
}