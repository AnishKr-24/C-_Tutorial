
// maximum and minimum

#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,3,4,-7,89,500,3};
    int x = sizeof(a)/4;
    int maxm = a[2];  //int mAXm = INT_MIN  ey sirf integer keliye hai negative nai kam nhi krega
    for (int i = 0; i < x; i++)
    {
        maxm =max(maxm,a[i]);
    }
    cout<<"maximum number of array="<<maxm<<endl;
    int minm = a[1]; //int minm = INT_MAX ey sirf integer keliye hai negative nai kam nhi krega
    for (int i = 0; i < x; i++)
    {
        minm = min(minm,a[i]);
    }
    cout<<"minimum number of array="<<minm<<endl;
    
    return 0;
}