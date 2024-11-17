

/*
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {12,34,56,45,78};
    for (int  i = 0; i <= 4; i++)
    {
        cout<<arr[i]*3<<" ";
    }
    return 0;
}
*/


//same hai

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {12,34,56,45,78};
    arr[0] = 0;
    for (int  i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}