

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Array size: "<<endl;
    cin>>n;
    int v[n];
    cout<<"Enter the Array of element:";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";  // output the array of element.
    // }
    // Insertion sort.
    for (int i = 1; i < n; i++)
    {
        int j=i;
        // while (j >= 1)
        // {
        //     if (v[j] >= v[j-1]) break;
        //     //if (v[j] < v[j-1])
        //     else swap(v[j] , v[j-1]);
        //     j--;
        // }
        while (j >= 1 && v[j] <= v[j-1])
        {
           swap(v[j] , v[j-1]);
           j--;
        }
        
        
    }
    cout<<"Insertion Sort :";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
 }