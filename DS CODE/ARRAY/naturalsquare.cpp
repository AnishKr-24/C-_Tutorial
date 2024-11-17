
// square in array;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number of array=";
        cin>>arr[i];
    }
    int square=1;
    for (int i = 0; i < n; i++)
    {
       square= arr[i]*arr[i];
    }
    cout<<square<<endl;
    return 0;
    
}