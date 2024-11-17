
// swap without using extra variable;

#include<iostream>
using namespace std;
int main()
{
int x = 48;
int y = 77;
cout<<x<<" "<<y<<endl;
x = x ^ y;  // a+b;
y = x ^ y;   //a-b;
x = x ^ y;  //a-b
cout<<x<<" "<<y<<endl;
return 0;
}