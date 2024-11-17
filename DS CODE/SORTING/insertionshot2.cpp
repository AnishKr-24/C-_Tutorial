

#include<iostream> 
using namespace std;
int main()
{
    int num;
    cout<<"Enter the array of size=";
    cin>>num;
    int arr[num];
    int i ,j;
    
    for ( i = 0; i < num; i++)
    {
        cout<<"Enter the element of array=";
        cin>>arr[i];
    }
    
    
    for ( i = 1; i < num; i++)
    {
        int temp = arr[i];
       
        for ( j = i-1; j >=0 && temp<arr[j]; j--)
        {
            arr[j+1] = arr[j];
            
        }
        arr[j+1] = temp;
    }
    cout<<"After the shorting using insertion short=";
    for ( i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}