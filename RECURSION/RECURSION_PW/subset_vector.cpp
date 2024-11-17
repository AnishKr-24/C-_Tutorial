

#include<iostream>
#include<vector>
using namespace std;

// 1st method.
void subset(string ans , string original,vector<string>& v)
{
    if(original=="") {
       v.push_back(ans);
        return ;
    }
    char ch = original[0];
    subset(ans,original.substr(1),v);
    subset(ans+ch,original.substr(1),v);
}
int main()
{
    string str = "abc";
    vector<string> v;
    subset("",str,v);
    for(string ele : v)
    {
        cout<<ele<<endl;
    }
}