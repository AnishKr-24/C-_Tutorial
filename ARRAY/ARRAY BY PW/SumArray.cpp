

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<"ANSWER : "<<sum;
}