

#include<iostream>
using namespace std;
int main()
{
    int row_size = 5;
    int in , out;
    for (out = row_size; out >= -(row_size-1); out--)
    {
        for ( in = row_size-1; in >= abs(out); in--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}