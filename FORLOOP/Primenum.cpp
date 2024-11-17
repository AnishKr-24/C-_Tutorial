


/*

// This is most Important.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    bool temp = true;
    for (int i = 2; i <= n-1; i++)
    {
       
        if (n%i == 0)
        {
            temp = false;
            break;
        }
        
    }
    if (n==1)
    {
        cout<<"Not Prime Number Nor Composite Number";
    }
    else if (temp==true)
    {
        cout<<"it is prime";
    }
    else
    cout<<"Composite Number";
    return 0;
}

*/




// Second Method best.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i = 2 , temp = 0;
    while (n >= i)
    {
        if (n % i == 0)
        {
            temp++;
        }
        i++;
    }
    if (temp == 1)
    {
        cout<<"It is Prime";
    }
    else
    {
        cout<<"It is not Prime";
    }
    return 0;
}


