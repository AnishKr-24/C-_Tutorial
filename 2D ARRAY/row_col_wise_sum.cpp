


#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int target,int row,int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}
void printcolsum(int arr[][3],int row,int col)
{
    cout<<"Printing sum = "<<endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<< sum <<" ";
    }
    cout<<endl;
}
void printsum(int arr[][3],int row,int col)
{
    cout<<"Printing sum = "<<endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<< sum <<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3];
    cout<<"Enter the elements : "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
        
    }
    

    cout<<" Printing Array : "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to search : "<<endl;
    int target;
    cin>>target;


    if (isPresent(arr,target,3,3))
    {
        cout<< "Element found " <<endl; 
    }
    else
    {
        cout<<"Element not found "<<endl;
    }

    printcolsum(arr,3,3);
    return 0;
}