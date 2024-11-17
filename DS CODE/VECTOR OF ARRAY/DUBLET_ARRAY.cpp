

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the Target : ";
    cin>>x;
    vector<int>n;
    cout<<"Enter the Array Size : ";
    for (int i = 0; i < x; i++)
    {
        int m;
        cin>>m;
        n.push_back(m);
    }
    for (int i = 0; i < n.size()-2; i++)
    {
        for (int j = i+1 ; j < n.size()-1; j++)
        {
            if (n[i] + n[j] == x)
            {
                cout <<"Answer of Add Index : " << "(" << n[i] << "," << n[j] << ")" << endl;
            }
            
        }
        
    }
    
}