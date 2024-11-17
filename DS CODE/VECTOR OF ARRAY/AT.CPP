

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.push_back(12);
    v.push_back(7);
    //cout<<v[2]<<endl;
    v.at(2)=500;
    cout<<v.at(2)<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";  // update the value of v[2].
    }
    cout<<endl;
    sort(v.begin() , v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
}