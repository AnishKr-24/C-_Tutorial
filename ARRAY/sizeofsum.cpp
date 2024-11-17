

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,23,45,6,78,9,1,2,4};
    int n = sizeof(arr)/4;
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}


// ey sirf 10 he input le skte hai

/*#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n = sizeof(arr)/4;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the  array=";
        cin>>arr[i];
    }
    
    
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
*/

