

#include<iostream>
using namespace std;
int main()
{
  float  c , s , d , m , D , r;
  int b ,a;
  cout<<"\nEnter the First number=";
  cin>>a;
  cout<<"\nEnter the Second number=";
  cin>>b;
  cout<<"\nEnter the Second number=";
  cin>>c;
  s = a + b + c;
  cout<<"\nSum of three number="<<s;
  d = a - b;
  cout<<"\nSubtract of two number="<<d;
  m = a * b * c;
  cout<<"\nmultiple of three number="<<m;
  D = a/c;
  cout<<"\ndivide of two number="<<D;
  r = a % b;
  cout<<"\nRemainder of two number="<<r;
}   