


# include<iostream>
using  namespace std;
bool iseven(int a)
{
    if(a&1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout<<"Enter the  number=";
    cin>>num;
    if (iseven(num))
    {
        cout<<"number is even";
    }
    else
    cout<<"number is odd";
    return 0;
    
}