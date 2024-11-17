

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    int n=v.size();
    cout<<"Enter the Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1-i; i++)
        {
            if (v[i] > v[i + 1])
            {
                // int temp  = v[i];
                // v[i]=v[i+1];
                // v[i+1]=temp;
                swap(v[i], v[i + 1]);  // Best Case.
                flag = true;
            }
        }
    }
    if (flag == false)
        cout << "Sorted the array" << endl;
    else
        cout << "Unsorted the array" << endl;
}