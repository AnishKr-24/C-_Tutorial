


#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target , int i , int j)
{
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[3][4] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}
int main()
{
    // int n , m;
    // cout<<"Enter the n number of array : "<<endl;
    // cin>>n;
    // cout<<"Enter the n number of array : "<<endl;
    // cin>>m;
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter the element of array : ";
            cin>>arr[i][j];
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element of search : "<<endl;
    int target;
    cin>>target;
    if (isPresent(arr,target , 3 , 4))
    {
        cout<<"Element found";
    }
    else
        cout<<"Element Not found";
    return 0;
}