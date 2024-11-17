

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of student : ";
    cin>>n;
    int marks[n];
    cout<<"Enter the student marks : ";
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (marks[i]<35)
        {
            //cout<<i<<" "; index batyega;
            cout<<"Student marks of fail : "<<marks[i]<<" ";
        }
        
    }
    
}