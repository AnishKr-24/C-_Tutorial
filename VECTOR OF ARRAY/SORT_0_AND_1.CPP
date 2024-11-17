
// 0 1 lena hai.

#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v)
{
    int n = v.size();
    int no0 = 0;
    int no1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            no0++;
        }
        else
            no1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i<no0)
        {
            v[i] = 0;
        }
        else
            v[i] = 1;
    }
    
}
int main()
{
    int x;
    cout<<"Enter the Array of Size : ";
    cin>>x;
    vector<int>v;
    cout<<"Enter the Array of Element : ";
    for (int i = 0; i < x; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort01(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}