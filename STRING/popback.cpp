




#include<iostream>
using namespace std;
int main()
{
    string a = " Anish";    
    cout<<a<<endl;
    a.push_back('a');   // push_back ek word ko add krta hai
    cout<<a<<endl;
    a.push_back('a');   // push_back ek word ko add krta hai
    cout<<a<<endl;
    a.pop_back();
    cout<<a<<endl;
    a.pop_back();  // pop_back ek word ko hta deta hai
    cout<<a<<endl;
    return 0;
}