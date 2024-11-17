

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the value=";
    cin>>ch;
    if (ch>='a' && ch <='z')
    {
        cout<<"Lower case";
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"upper  case";
    }
    else if (ch>='0' && ch<='9')
    {
        cout<<"numberic value";
    }
    return 0;
    
    
}