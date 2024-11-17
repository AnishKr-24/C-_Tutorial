


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the array of size : ";
    cin>>num;
    vector<int>n;
    cout<<"Enter the array of Element : ";
    for (int i = 0; i < num; i++)
    {
        int m;                   // input
        cin>>m;
        n.push_back(m);
    }
    cout<<"Output the array : "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<n[i]<<" ";          // output
    }
}