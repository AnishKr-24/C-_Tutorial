


#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/4;
    int product =1;
    for (int i = 0; i <n; i++)
    {
        product *=a[i];
    }
    cout<<product<<endl;
    return 0;
    
}