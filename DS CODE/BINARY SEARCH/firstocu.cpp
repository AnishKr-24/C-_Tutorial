

#include<iostream>
using namespace std;
int firstocc(int arrray[] , int n,int key)
{
    int s =0,e=n-1;
    int mid=s+(e-s)/2 ;  //s means start  and e means end.
    int ans = -1;
    while (s<=e)
    {
        if (arrray[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key > arrray[mid])   //Right mai jaou
        {
            s = mid+1;
        }
        else if (key < arrray[mid])  //left mai jaou
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[9]={2,3,4,6,5,8,2,3,6};
    cout<<"FIRST OCCURENCE OF 6 IS AT INDEX="<<firstocc(arr,9,5);
    return 0;
}