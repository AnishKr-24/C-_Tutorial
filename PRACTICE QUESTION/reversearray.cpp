

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array=";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size ; i++)
    {
        cout<<"Enter the element of array=";
        cin>>arr[size];
    }
    int b[size];
    for (int i = 0; i < size; i++)
    {
        b[size] = arr[size-1-i];
        cout<<b[size]<<endl;
    }
    return 0;
    
}