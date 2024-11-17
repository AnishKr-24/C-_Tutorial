


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int arr[n];
    int sum = 0;
    for (int i = 6; i >= 0; i--)
    {
        sum += arr[i] * n;
        n *= 2;
    }
    cout<<"Sum :"<<n;
    return 0;
}