

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array of size : ";
    cin>>n;
    int arr[n];
    cout<<"Array of element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<< "Array of ouput : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}