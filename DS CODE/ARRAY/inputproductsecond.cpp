

//product of array

#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,3,4};
    int n = sizeof(a)/4;
    int product=1;
    for (int i = 0; i <n; i++)
    {
        product*=a[i];
    }
    cout<<"product of array="<<product<<endl;
    return 0;
}