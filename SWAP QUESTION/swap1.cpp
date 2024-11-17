#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 8;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}