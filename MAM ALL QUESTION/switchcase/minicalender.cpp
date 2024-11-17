


#include<iostream>
using  namespace  std;
int main()
{
    int a,b;
    cout<<"Enter the First number="<< endl;
    cin>>a;
    cout<<"Enter the Second number="<< endl;
    cin>>b;
    char op;
    cout<<"Enter the operation of value"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Add="<<(a+b)<<endl;
        break;
    case '-':
        cout<<"Subtract="<<(a-b)<<endl;
        break;
    case '*':
        cout<<"Multiple="<<(a*b)<<endl;
        break;
    case '/':
        cout<<"Division="<<(a/b)<<endl;
        break;
    case '%':
        cout<<"mod="<<(a%b)<<endl;
        break;
    
    default:
        cout<<"Other Wise "<<endl;
        break;
    }
    return 0;
}