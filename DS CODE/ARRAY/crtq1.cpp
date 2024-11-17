

#include<iostream>
using namespace std;
int main()
{
    /*int c;
    int a[6]={1,3,5,6,7,8};
    c=a[1];
    */
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter the element="<<" ";
        cin>>a[i];
    }
    cout<<a[1]<<endl;
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum+a[i];
    }
    cout<<sum;
    return 0;
}