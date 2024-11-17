



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the array size : ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the array of element : "<<endl;;
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int mx = a[0];  
//     for (int  i = 0; i < n; i++)  // phle max nikla .
//     {
//         if (mx<a[i] )
//         {
//             mx = a[i];
//         }
//     }
//     int smx = a[0];
//     for (int  i = 0; i < n; i++)  // second max ke liye.
//     {
//         if (smx<a[i] && a[i] != mx)
//         {
//             smx = a[i];
//         }
        
//     }
//     cout<<"SECOND MAXIMUM NUMBER : "<<smx;
//     return 0;
// }





// SECOND METHOD.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array of element : "<<endl;;
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx = INT_MIN;  
    for (int  i = 0; i < n; i++)  // phle max nikla .
    {
        if (mx<a[i] )
        {
            mx = a[i];
        }
    }
    int smx = INT_MIN;
    for (int  i = 0; i < n; i++)  // second max ke liye.
    {
        if (smx<a[i] && a[i] != mx)
        {
            smx = a[i];
        }
        
    }
    cout<<"SECOND MAXIMUM NUMBER : "<<smx;
    return 0;
}