

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {2,4,3,6};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index="<<a.at(2)<<endl;
    cout<<"Empty or not ="<<a.empty()<<endl;
    cout<<"First Element="<<a.front()<<endl;
    //cout<<"Middle Element="<<a.max_size()<<endl;
    cout<<"Last Element="<<a.back()<<endl;
    return 0;
}