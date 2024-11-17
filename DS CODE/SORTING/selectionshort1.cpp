
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,9,1,45,6};
    for (int i = 0; i < 5; i++)
    {
        int min = a[i];
        int index = i;
        for (int j =i + 1; j < 6; j++)
        {
            if (min>a[j])
            {
                min = a[j];
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
    cout<<"After the selection Shorting = ";
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}