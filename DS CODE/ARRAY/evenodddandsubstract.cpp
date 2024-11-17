

#include<iostream>
using namespace std;
int main()
{
    int a[9] = {1,2,3,4,5,8,7,3,4};
    int evensum=0,oddsum=0 , subtract;
    for (int  i = 0; i <= 8; i++)
    {
        if (i%2==0)
        {
            evensum += a[i];
        }
        else
        oddsum += a[i];
       
    }
    cout<<"even sum="<<evensum<<endl;
    cout<<"odd sum="<<oddsum<<endl;
    subtract = evensum-oddsum;
    cout<<"subtract of all="<<subtract<<endl;
    return 0;
}
    