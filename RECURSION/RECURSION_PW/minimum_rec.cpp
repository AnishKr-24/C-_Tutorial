


#include<iostream>
#include<climits>
using namespace std;


// This is 1st method.
void printmin(int a[] , int n, int idx, int min)
{
    if(n==idx)  // base case
    {
        cout<<"Minimum : "<<min;
        return;
    }
    if(min>a[idx]) min=a[idx];
    printmin(a,n,idx+1,min);
}


// This is 2nd method.it is easy .
// int minArray(int a[], int n, int idx)
// {
//     if (idx == n) return INT_MAX; // Base case
//     return min(a[idx], minArray(a, n, idx + 1)); // Recursive call
// }

int main()
{
    //int a[] = {23,1,4,5,67,89,6};
    int n;
    cout<<"E#nter the array size : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the Array of element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //int n=sizeof(a)/sizeof(a[0]);
    printmin(a,n,0,INT_MAX);
    //cout<<minArray(a,n,0);
}