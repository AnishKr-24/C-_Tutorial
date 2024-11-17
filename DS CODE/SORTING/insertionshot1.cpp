

#include<iostream> 
using namespace std;
int main()
{
    int arr[10] = {15,8,21,2,18,1,5,68,35,6};
    int i ,j;
    for ( i = 1; i < 10; i++)
    {
        int temp = arr[i];
       
        for ( j = i-1; j >=0 && temp<arr[j]; j--)
        {
            arr[j+1] = arr[j];
            
        }
        arr[j+1] = temp;
    }
    cout<<"After the shorting=";
    for ( i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}