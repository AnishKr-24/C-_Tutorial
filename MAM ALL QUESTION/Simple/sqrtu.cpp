

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float num;
    cout<<"Enter the enter = ";
    cin>>num;
    float find;
    if (num>0 && num<=10000)
    {
        find = sqrt(num);
        cout<<"Answer="<<find;
    }
    else
    cout<<"invalid";
    return 0;
}