

#include<iostream>
using namespace std;
int main()
{
    int x = 10,y;
    y = ++x + ++x;
    cout<<y<<endl;
    y = x++ + x++;
    cout<<y;
    return 0;
}

