


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array of element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= arr[i];
    }
    cout<<"ANSWER OF PRODUCT : "<<p;
}