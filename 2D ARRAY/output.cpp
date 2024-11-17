


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    arr[0][0] = 3;
    arr[0][1] = 4;
    arr[0][2] = 5;
    arr[1][0] = 6;
    arr[1][1] = 7;
    arr[1][2] = 8;
    arr[2][0] = 4;
    arr[2][1] = 2;
    arr[2][2] = 5;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
   

}