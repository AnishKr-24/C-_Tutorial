//variable

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
    aman(10);
    return 0;
}