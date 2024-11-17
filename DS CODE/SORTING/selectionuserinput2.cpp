




#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the array size = ";
    cin>>num;
    int a[num];
    cout<<"Enter the array of element = ";
    for (int i = 0; i < num; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < num; i++)
    {
        int min = a[i];
        int index = i;
        for (int j =i + 1; j < num; j++)
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
    for (int i = 0; i < num; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}