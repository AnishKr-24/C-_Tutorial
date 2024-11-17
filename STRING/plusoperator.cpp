

#include<iostream>
using namespace std;
int main()
{
    string a = " Anish";    
    cout<<a<<" "<<a.length()<<endl;
    a = a + " kumar";   /// ey bhi add he krta hai
    cout<<a<<" "<<a.length()<<endl;
    a = " nirala" + a;
    cout<<a<<" "<<a.length()<<endl;
    return 0;
}