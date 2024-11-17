

#include<iostream>
using namespace std;
int main()
{
    
    // int student[2][4];
    // for (int i = 0; i <= 1; i++)
    // {
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         cin>>student[i][j];
    //     }
        
    // }
    // cout<<"Student Details "<<endl;
    // for (int i = 0; i <= 1; i++)
    // {
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         cout<<student[i][j]<<" ";
    //     }
    //     cout<<endl;
    //}
    int student[2][4];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cin>>student[j][i];
        }
        
    }
    cout<<"Student Details "<<endl;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout<<student[j][i]<<" ";
        }
        cout<<endl;
    }
}