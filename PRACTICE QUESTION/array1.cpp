

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array element=";
    for (int i = 0; i <= 4; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    arr[2]=300;   //update the value
    cout<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}