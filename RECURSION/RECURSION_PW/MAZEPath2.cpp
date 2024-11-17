


#include<iostream>
using namespace std;
int mazepath2(int Row,int Col)
{
    if(Row < 1 || Col < 1)
        return 0;
    if(Row==1 && Col==1)
        return 1;
    int Rowways = mazepath2(Row , Col-1);
    int Downways = mazepath2(Row-1 , Col);
    int ans = Rowways + Downways;
    return ans;
}
int main()
{
    int n , m;
    cout<<"Enter the Row :";
    cin>>n;
    cout<<"Enter the Col :";
    cin>>m;
    cout<<"No. of Ways : " <<mazepath2(m,n);
    return 0;
    
}