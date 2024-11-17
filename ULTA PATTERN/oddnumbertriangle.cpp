
//all are same output
//odd number triangle print.


/*
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of rows=";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
    
}
*/



//BOTH ARE SAME


/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of rows=";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <=2*i-1; j+=2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}*/



//3rd method





#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of rows=";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        int x = 1;
        for (int j = 1; j <=i; j++)
        {
            cout<<x<<" ";
            x+=2;
        }
        cout<<endl;
    }
    
}