

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter the First String value=";
    cin>>str1;
    cout<<"Enter the Second String value=";
    cin>>str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) 
    {
        cout << "Anagrams Value" ;
    }
    else
    {
        cout<<"Not Anagrams Value";
    }
    return 0;
}