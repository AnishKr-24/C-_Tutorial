



// three positive number input and print greatest but without multiple condition
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
    if (x>y)
    {
        if (x>z)
        {
            cout<<" X is greatest ="<<x;
        }
        else
            cout<<"Z is greatest ="<<z;
        
    }
    else
    {
        if (y>z)
        {
            cout<<"Y is greatest ="<<y;
        }
        else
            cout<<"Z is grestest ="<<z;
        
    }

}
    