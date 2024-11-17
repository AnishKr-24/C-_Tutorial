


#include<iostream>
using namespace std;
int main()
{
    string a = " Anish";    
    cout<<a<<endl;
    a.append(" kumar");    // append pura ke pura word ko add krta hai
    cout<<a<<endl;
    cout<<a.length()<<endl;
    a.append(" nirala");
    cout<<a<<" "<<a.length()<<endl;
    return 0;
}