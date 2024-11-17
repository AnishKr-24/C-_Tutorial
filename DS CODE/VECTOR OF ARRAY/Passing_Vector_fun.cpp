


#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a)
{
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    cout<<"Enter the Array Size : ";
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);  // uper ka function chalega.
    for (int i = 0; i < 6; i++)
    {
        cout<<v[i]<<" ";
    }
}