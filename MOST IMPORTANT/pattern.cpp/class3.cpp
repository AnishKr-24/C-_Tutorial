

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number=";
    cin>>number;
    for (int i = number; i >=1; i++)
    {
        for (int j = number; j <= number-i; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}