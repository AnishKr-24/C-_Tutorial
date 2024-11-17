


#include<iostream>
using namespace std;
int main()
{
    int a[8];
    for (int i = 1; i <=7; i++)
    {
        cout<<"Enter the array of number=";
        cin>>a[i];
    }
    int product=1;
    for (int  i = 1; i <= 7; i++)
    {
        product=product*a[i];
    }
    cout<<"product of array="<<product<<endl;
    return 0;
    
    
}