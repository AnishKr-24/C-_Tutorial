

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array of element :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the search element : ";
    cin>>search;
    bool FALSE;
    for (int i = 0; i < n; i++)
    {
        if (search == arr[i] )
        {
            search = true;
        }
        
    }
    if (search == true)
    {
        cout<<"Element Found :";
    }
    else
        cout<<"Element not Found :";
    return 0;
}