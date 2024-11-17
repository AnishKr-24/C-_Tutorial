


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     for (int i = 0; i <= 3; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i <= 7; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 1; i <= n; i++)  // n rkhe hai to jitna mann utna chalenge. n = 3 rkhete to 3 he bar chalate
    {
        cin>>n;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}