

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of rows=";
    cin>>num;
    int mid = num/2+1;
    for (int  i = 1; i <= num; i++)
    {
        for (int  j =1; j <= num; j++)
        {
           if (i==mid || j==mid) cout<<"*  ";
           else  cout<<"   ";
           
        }
        cout<<endl;


    }
  
return 0;    
}