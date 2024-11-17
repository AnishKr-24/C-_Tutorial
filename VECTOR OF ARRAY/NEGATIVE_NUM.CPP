

#include<iostream>
#include<vector>
using namespace std;
void sortnegativepositive(vector<int>& v)
{
    int n = v.size();
    int noPos = 0;
    int noNeg = n-1;
    while (noPos <= noNeg)
    {
        while (noPos <= noNeg && v[noPos] < 0)
        {
            noPos++;
        }
        while (noPos <= noNeg && v[noNeg] >= 0)
        {
            noNeg--;
        }
        if (noPos <= noNeg)
        {
            swap(v[noPos], v[noNeg]);
            noPos++;
            noNeg--;
        }
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
    sortnegativepositive(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}