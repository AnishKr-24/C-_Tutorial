


#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,4,5,8,10,45,1,3};
    int x = 5;
    int count = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (a[i]>x)
        {
            count++;
            cout<<a[i]<<endl;
        }
        
    }
    
}
