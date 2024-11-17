

#include<iostream>
using namespace std;


void quick(int arr[],int num,int beg,int end,int *loc)
{
    int left,right,temp;
    left = beg;
    right = end;
    *loc = beg;
    step1: while (arr[*loc]<=arr[right] && right != *loc)
    {
        right --;
    }
    if (right==*loc)
    {
        return;
    }
    if(arr[*loc]>arr[right])
    {
        temp = arr[*loc];
        arr[*loc]=arr[right];
        arr[right]=temp;
        *loc=right;
    }
    goto step2;
    step2 :while (arr[*loc]>=arr[left]&&left !=*loc)
    {
        left ++;
    }
    if (left==*loc)
    {
        return;
    }
    if (arr[*loc]<arr[left])
    {
        temp = arr[*loc];
        arr[*loc] = arr[left];
        arr[left] = temp;
        * loc = temp;
    }
    goto step1;
}
void quick_short(int arr[],int num)
{
    int beg,end,top=-1,loc;
    int lower[10],upper[10];
    if (num>1)
    {
        top++;
        lower[top]=0;
        upper[top]=num-1;
    }
    while (top != -1)
    {
        beg=lower[top];
        end=upper[top];
        top--;
        quick(arr,num,beg,end,&loc);
        if (beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if (loc+1<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
        
    }
    
}
int main()
{
    int num;
    cout<<"Enter the array of size=";
    cin>>num;
    int arr[num];
    cout<<"Enter the array of element=";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    quick_short(arr,num);
    cout<<"After the shorting=";
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}