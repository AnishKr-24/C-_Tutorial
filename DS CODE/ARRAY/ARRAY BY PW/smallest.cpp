

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Array of Size :";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Element :";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int min = INT_MAX;
    for (int  i = 0; i < n; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    cout<<"Smallest Number : "<<min;
    return 0;
}