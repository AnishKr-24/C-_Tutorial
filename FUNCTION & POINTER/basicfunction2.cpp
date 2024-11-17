
// basic function

#include<iostream>
using namespace std;
void boy1()
{
    cout<<"what is your name"<<endl;
    cout<<"my name is mohan"<<endl;
    
    return;
}
void boy2()
{
    cout<<"what is your name"<<endl;
    cout<<"my name is rohni"<<endl;
    boy1();
    return;
}
int main()
{
    cout<<"one boy and one girl"<<endl;
    boy2();
}