
// khud mai khud se krta hai usi ko recursion kahte hai

#include<iostream>
using namespace std ;
void call()
{
    cout<<"good morning"<<endl;
    call();
    return ;
    
}
int main()
{
    call();
    return 0;
}