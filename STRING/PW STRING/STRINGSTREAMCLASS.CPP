

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string s ;//= " Anish    is a integellent boy";
    cout<<"Enter the string :";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
}