
//input integer 1 to N

#include<iostream>
using namespace std;
void coll(int x,int y)
{
    if (x>y)
    {
        return;
    }
    
    cout<<x<<endl;
    coll(x+1,y);
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    coll(1,n);
    return 0;
}

