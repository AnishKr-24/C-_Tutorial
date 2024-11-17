

#include<iostream>
using namespace std;
int main()
{
    string a = " Anish";    
    cout<<a<<endl;
    a.append(" kumar");    
    cout<<a<<" "<<a.length()<<endl;
    a.clear();     // clear pura ko hta(0) deta hai
    cout<<a<<" "<<a.length()<<endl;
    return 0;
}