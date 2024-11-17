

#include<iostream>
using namespace std;
int main()
{
    int a[5];                 
    for (int i = 0; i <= 4; i++)
    {
        cout<<"Enter the array element=";
        cin>>a[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout<<a[i]<<" ";  // cout<<a[i]*3<<" " ismai sirf 3 guna ho jayega
    }
    a[2]=200;  //update the value
    cout<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout<<a[i]<<" ";
    }
    
}