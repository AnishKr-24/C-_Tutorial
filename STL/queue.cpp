

#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    queue<string>q;
    q.push("jai ");
    q.push("Shreee");
    q.push("Ram");
    cout<<"size before pop="<<q.size()<<endl;
    cout<<"First element="<<q.front()<<endl;
    q.pop();
    cout<<"size before pop="<<q.size()<<endl;
    cout<<"First element="<<q.front()<<endl;
    return 0;
}