

// take three positivr integer input and print the greatest of them

#include<iostream>
using namespace std;
int main()
{
    int x , y , z;
    cout<<"Enter the  first number =";
    cin>>x;
    cout<<"Enter the  second number =";
    cin>>y;
    cout<<"Enter the  third number =";
    cin>>z;
    if ((x>y) && (x>z))
    {
       cout<<"X is greatest number="<<x;
    }

    else if((y>x) && (y>z))
    {
    cout<<"X is greatest number="<<y;
    }
    else
    {
        cout<<"Z is greatest number="<<z;
    }


}