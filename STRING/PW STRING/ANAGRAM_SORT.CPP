


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s; //= "Physicwallah";
    cout<<"Enter the First String : ";
    getline(cin,s);
    string t; //= "phywallahsics";
    cout<<"Enter the second String : ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t)
    {
        cout<<true;
    }
    else
        cout<<false;
}