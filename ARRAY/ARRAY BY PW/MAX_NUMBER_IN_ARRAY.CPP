


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array of element : ";
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx = a[0];  // max = INT_MIN SECOND METHOD
    for (int  i = 0; i < n; i++)
    {
        if (mx<a[i])
        {
            mx = a[i];
        }
        
    }
    cout<<"MAXIMUM NUMBER : "<<mx;
    return 0;
}




// SECOND METHOD.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the array size : ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the array of element : ";
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     //int mx = a[0];  // max = INT_MIN SECOND METHOD
//     int mx = INT_MIN;
//     for (int  i = 0; i < n; i++)
//     {
//         if (mx<a[i])
//         {
//             mx = a[i];
//         }
        
//     }
//     cout<<"MAXIMUM NUMBER : "<<mx;
//     return 0;
// }