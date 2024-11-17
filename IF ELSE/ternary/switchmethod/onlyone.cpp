#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter the First number =";
    cin>>n1;
    char op;
    cout<<"Enter the chacter =";
    cin>>op;
    int n2;
    cout<<"Enter the Second number =";
    cin>>n2;
    switch (op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
    case '-':
        cout<<n1 - n2<<endl;
        break;
    case '*':
        cout<<n1 * n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    
    default:
        cout<<"invalid operator"<<endl;
        break;
    }

}