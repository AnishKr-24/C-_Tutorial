

#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,56,6};
    //int* ptr = arr;
    int* ptr = &arr[3];
    //cout<<ptr;
    cout<<&arr[3];
}