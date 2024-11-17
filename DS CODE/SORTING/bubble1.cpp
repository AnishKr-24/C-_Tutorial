

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int arr[num];
    cout<<"Enter the array of element=";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < num; i++)
    {
        for (int j = 0; j< num-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"After Shorting = ";
    for (int  i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

