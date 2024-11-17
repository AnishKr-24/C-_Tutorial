


#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str = "Anish";
    // //cout<<sizeof(str)<<endl;
    // cout<<str<<endl;
    // cout<<str[0]<<endl;
    // cout<<str[3]<<endl;   // ismai indexing bhi kar skte hai.


    // string s;  // is se input le skte hai.likin gap ke bad bala part print nhi hoga.02
    // cin>>s;
    // cout<<s;

    string name;
    getline(cin,name);   // getline use krne se koi gap ka problem nhi hota hai.
    cout<<name;
}