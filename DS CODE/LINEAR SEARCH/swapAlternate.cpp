


#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void swapalternate(int arr[],int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main()
{
    int even[10]={2,4,7,8,91,2,5,12,31,9};
    int odd[7]={2,5,8,4,9,7,6};
    swapalternate(even,10);
    printarray(even,10);
    cout<<endl;
    swapalternate(odd,7);
    printarray(odd,7);
    return 0;
}