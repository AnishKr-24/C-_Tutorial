

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n = "abcd";
    cout<<n<<endl;
    n.push_back('E');
    n.push_back('F');
    n.push_back('G');
    n.push_back('H');
    cout<<n<<endl;
    n.pop_back();
    n.pop_back();
    cout<<n<<endl;
}