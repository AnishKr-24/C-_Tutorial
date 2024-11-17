

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the array size : ";
    cin>>num;
    int array[num];
    cout<<"Enter the array of element : ";
    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout<<array[i]<<" ";  // output ayega array index.
    }
    cout<<endl;
    int a;
    cout<<"Enter the element you want to search : ";
    cin>>a;
    bool flag = false;
    for (int i = 0; i < num; i++)
    {
        if (array[i] == a)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout<<"Element found";
    }
    else
        cout<<"Element not found";
    return 0;
}





