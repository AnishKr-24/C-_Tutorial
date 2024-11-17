

// HARD LEVEL.



// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int m , n;
//     cout<<"Enter the Row Size :";
//     cin>>m;
//     cout<<"Enter the Col Size :";
//     cin>>n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     cout<<"Spiral Array : "<<endl;
//     // Spiral.
//     int minr = 0 , minc = 0;
//     int maxr = m-1,maxc = n-1;
//     while (minr <= maxr && minc <= maxc)
//     {
//         // Right.
//         for (int j = minc; j <= maxc; j++)
//         {
//             cout<<arr[minr][j]<<" ";
//         }
//         minr++;
//         if (minr > maxr || minc > maxc)
//             break;
//         // Down.
//         for (int i = minr; i <= maxr; i++)
//         {
//             cout<<arr[i][maxc]<<" ";
//         }
//         maxc--;
//         if (minr > maxr || minc > maxc)
//             break;
//         // Left.
//         for (int j = maxc; j >= minc; j--)
//         {
//             cout<<arr[maxr][j]<<" ";
//         }
//         maxr--;
//         if (minr > maxr || minc > maxc)
//             break;
//         //Up/Top.
//         for (int i = maxr; i >= minr; i--)
//         {
//             cout<<arr[i][minc]<<" ";
//         }
//         minc++;
//     }
    
// }



//  Second Method Easy Method.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m , n;
    cout<<"Enter the Row Size :";
    cin>>m;
    cout<<"Enter the Col Size :";
    cin>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Spiral Array : "<<endl;
    // Spiral.
    int minr = 0 , minc = 0;
    int maxr = m-1,maxc = n-1;
    int totalnoofE = n*m;
    int count=0;
    while (minr <= maxr && minc <= maxc)
    {
        // Right.
        for (int j = minc; j <= maxc && count < totalnoofE; j++)
        {
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        // Down.
        for (int i = minr; i <= maxr && count < totalnoofE; i++)
        {
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // Left.
        for (int j = maxc; j >= minc && count < totalnoofE; j--)
        {
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //Up/Top.
        for (int i = maxr; i >= minr && count < totalnoofE; i--)
        {
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    
}