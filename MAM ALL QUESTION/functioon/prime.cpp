

#include<iostream>
using namespace  std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        else
        return 1;
        
    }
}


int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    if (isPrime(num))
    {
        cout<<"Number is prime"<<endl;
    }
    else
    cout<<"Number is not prime"<<endl;
    return 0;
}