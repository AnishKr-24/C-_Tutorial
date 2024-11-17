



// #include<iostream>
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
//     int min = a[0];  // MIN = INT_MAX SECOND METHOD
//     for (int  i = 0; i < n; i++)
//     {
//         if (min>a[i])
//         {
//             min = a[i];
//         }
        
//     }
//     cout<<"MINIMUM NUMBER : "<<min;
//     return 0;
// }






//SECOND METHOD.
#include<iostream>
#include<climits>
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
    //int min = a[0];  // MIN = INT_MAX SECOND METHOD
    int min = INT_MAX;
    for (int  i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
        
    }
    cout<<"MINIMUM NUMBER : "<<min;
    return 0;
}




