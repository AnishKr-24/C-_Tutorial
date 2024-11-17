
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the value of array=";
        cin>>arr[i];
    }
    int sum =0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
    
}
*/
#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,7,-4,1,11};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum +=a[i];
    }
    cout<<"Sum ="<<sum<<endl;
    
    return 0;
}