

#include<iostream>
using namespace std;
int main()
{
    int a = 23;
    int b = 40;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}