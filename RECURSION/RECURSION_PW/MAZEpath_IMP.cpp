

#include<iostream>
using namespace std;
int mazepath(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec)
        return 0;
    if(sr==er || sc==ec)
        return 1;
    int Rw = mazepath(sr,sc+1,er,ec);
    int Dw = mazepath(sr+1,sc,er,ec);
    return mazepath(sr,sc+1,er,ec)  + mazepath(sr+1,sc,er,ec);
}
int main()
{
    int n , m;
    cout<<"Enter the Row :";
    cin>>n;
    cout<<"Enter the Col :";
    cin>>m;
    cout<<"No. of ways : "<<mazepath(1,1,m,n);
    return 0;
    
}