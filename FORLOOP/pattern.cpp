

#include<iostream>
using namespace std; 
int main()
{
    int n , m;
    cout<<"Enter the number of row  : ";
    cin>>n;
    cout<<"Enter the number of col : ";
    cin>>m;
    for (int i = 1; i <= n; i++)
    {
        //cout<<"*****"<<endl;
        for (int i = 1; i <= m; i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
}



// Row and Col same he hai.
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n;
//     cout<<"Enter the number of row  and col : ";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
    
// }