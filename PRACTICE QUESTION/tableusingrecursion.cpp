




#include<iostream>
using namespace std;
void table(int n)
{
    int table;
    for (int i = 1; i <= 10; i++)
    {
        table = i*n;
        cout<<table<<endl;
        
    }
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    table(n);
}