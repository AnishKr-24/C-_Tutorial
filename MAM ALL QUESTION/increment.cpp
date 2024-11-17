


#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the number=";
    cin>>x;
    y = ++x + ++x;
    cout<<"Preincreement="<<y<<endl;
    y = x++ + x++;
    cout<<"Post increment="<<y;
    return 0;
}