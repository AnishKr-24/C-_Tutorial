



#include<iostream>
using namespace std;
void printcounting(int n){
    for (int i = 0; i <= n; i++)
    {
        cout<<i<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    printcounting(n);
    return 0;
}