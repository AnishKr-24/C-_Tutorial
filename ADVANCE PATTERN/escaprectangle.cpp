

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the number of rows=";
    cin>>num1;
    cout<<"Enter the number of coloum=";
    cin>>num2;
    for (int  i = 1; i <= num1; i++)
    {
        for (int  j = 1; j <= num2; j++)
        {
            if(j==num1 || i==num1 || i==num1 || j==num2) cout<<"*"<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    
  
return 0;    
}