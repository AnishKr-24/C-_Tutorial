


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {2,3,4,5,6,7,8,9,1};
    //cout<<arr[0][0];
    // for (int i = 0; i <= 3; i++)
    // {
    //     cout<<arr[0][i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i <= 3; i++)
    // {
    //     cout<<arr[1][i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i <= 3; i++)
    // {
    //     cout<<arr[2][i]<<" ";
    // }
    // cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}