

#include<iostream>
#include<climits>
using namespace std;


// This is 1st method.
// void printmax(int a[] , int n, int idx, int max)
// {
//     if(n==idx)  // base case
//     {
//         cout<<"Maximum : "<<max;
//         return;
//     }
//     if(max<a[idx]) max=a[idx];
//     printmax(a,n,idx+1,max);
// }


// This is 2nd method.it is easy .
int maxArray(int a[], int n, int idx)
{
    if (idx == n) return INT_MIN; // Base case
    return max(a[idx], maxArray(a, n, idx + 1)); // Recursive call
}

int main()
{
    //User input the array.
    // int n;
    // cout<<"Enter the Array Size : ";
    // cin>>n;
    // int a[n];
    // cout<<"Enter the Array Element : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    


    int a[] = {23,1,4,5,67,89,6};
    int n=sizeof(a)/sizeof(a[0]);
    //printmax(a,n,0,INT_MIN);
    cout<<"Maximum : "<<maxArray(a,n,0);
}