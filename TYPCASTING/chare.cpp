


#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the charatcter=";
    cin>>ch;
    cout<<ch<<endl;
    cout<<int(ch);
    if (ch>=97 && ch<=122)
    {
        cout<<"The charatcter lower case";
    }
    else 
        cout<<"The charatcter upper case";
    return 0;
}