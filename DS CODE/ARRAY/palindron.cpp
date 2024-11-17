

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int a[n] ;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of element=";
        cin>>a[i];
    }
    int i = 0;
    int j=n-1;
    for ( i = 0; i < j; i++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
        
    }
    if (a[i] == a[j])
        {
           cout<<"palindron true"<<endl;
        }
    else
           cout<<"palindron false"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    

}