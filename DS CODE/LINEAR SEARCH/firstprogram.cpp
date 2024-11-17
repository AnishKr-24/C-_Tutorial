


#include<iostream>
using namespace std;
int main()
{
    int i,a[50],search,k=0;
    cout<<"Enter the 10 number=";
    for ( i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a number that you want to search=";
    cin>>search;
    for ( i = 0; i < 10; i++)
    {
        if (a[i]==search)
        {
            cout<<"Enter is found at position="<<i+1;
            k++;
            break;
        }
       
    }
    if (k==0)
       {
         cout<<"Number is not found=";
       }    
    return 0;
    
}