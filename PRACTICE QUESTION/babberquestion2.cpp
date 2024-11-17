

#include<iostream>
using namespace std;
int main()
{
    char  ch;
    cout<<"Enter the character=";
    cin>>ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout<<"This is lower="<<ch<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"This is upper="<<ch<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"This is numberic ="<<ch<<endl;
    }
    return 0;
    
    

}