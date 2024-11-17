


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<" enter the array of element="<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"first order="<<arr[i]<<endl;
    }
    for (int i = n; i >= 0; --i)
    {
        cout<<"reverse="<<arr[i]<<endl;
        
    }

    return 0;
    
    
}