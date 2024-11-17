


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
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
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
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout<< sum <<" ";
    }
    cout<<endl;
}


int largestRowSum(int arr[][3] , int row , int col)
{
    int maxi = INT8_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
        
    }
    cout<<"The maximum sum is : "<<maxi<<endl;
    return rowIndex;

}
int main()
{
    int arr[3][3];
    cout<<"Enter the elements : "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int ansIndex = largestRowSum(arr,3,3);
    cout<<"Maximum Row index : "<<ansIndex<<endl;
    return 0;
}