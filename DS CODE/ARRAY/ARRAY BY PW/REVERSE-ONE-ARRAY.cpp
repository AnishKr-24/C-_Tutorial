

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the Array Size :";
    cin>>n;
    vector<int>v;
    cout<<"Enter the Array Element :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"-----------------------"<<endl;
    cout<<"Reverse the array : "<<endl;
    vector<int>v2(v.size());
    for (int i = 0; i < v2.size(); i++)
    {
        v2[i] = v[v.size()-1-i];
    }
    display(v2);
}