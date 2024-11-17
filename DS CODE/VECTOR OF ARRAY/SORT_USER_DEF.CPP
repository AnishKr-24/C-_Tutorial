


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Array of Size : ";
    cin>>num;
    vector<int>m;
    // m.push_back(3);
    // m.push_back(13);
    // m.push_back(31);
    // m.push_back(23);
    // m.push_back(39);
    // m.push_back(30);
    // m.push_back(2);
    // m.push_back(21);
    // m.push_back(9);
    // m.push_back(0);
    cout<<"Enter the Array of Elemenet : ";
    for (int i = 0; i < num; i++)
    {
        int x;
        cin>>x;
        m.push_back(x);
    }
    sort(m.begin(), m.end());
    cout<<"Shorted the array : ";
    for (int i = 0; i < m.size(); i++)
    {
        cout<<m[i]<<" ";
    }
    
}