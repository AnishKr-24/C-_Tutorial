

#include<iostream>
#include<vector>
using namespace std;
vector<int>mergeTwosort(vector<int>& n , vector<int>& m)
{
    int v1 = n.size();
    int v2 = m.size();
    vector<int>result(v1+v2);
    int i = 0;  //v1[]
    int j = 0;  //v2[]
    int k = 0;  //result[]
    while (i<=v1-1 && j<=v2-1)
    {
        if (n[i] < m[j])
        {
            result[k]=n[i];
            i++;
        }
        else
        {
            result[k] = m[j];
            j++;
        }
    }
    k++;
    if (i==v1)
    {
        while (j <= v2-1)
        {
            result[k] = m[j];
            k++;
            j++;
        }
            
    }
    if (j==v2)
    {
        while (i <=v1-1)
        {
            result[k] = n[i];
            k++;
            i++;
        }
            
    }
    return result;
}
int main()
{
    int x;
    cout<<"Enter the First Array Size : ";
    cin>>x;
    vector<int>n;
    cout<<"Enter the First Array of Element : ";
    for (int i = 0; i < x; i++)
    {
        int a;
        cin>>a;
        n.push_back(a);
    }
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    int y;
    cout<<"Enter the Second Array Size : ";
    cin>>y;
    vector<int>m;
    for (int i = 0; i < y; i++)
    {
        int b;
        cin>>b;
        m.push_back(b);
    }
    for (int i = 0; i < m.size(); i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
    vector<int> v = mergeTwosort(n, m);
    cout << "Merged and Sorted Array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
    
}
