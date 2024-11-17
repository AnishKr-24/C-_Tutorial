

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    //cin>>s;
    getline(cin,s);
    //cout<<s<<endl;
    int n = s.length();
    cout<<s.substr(n/2);
}