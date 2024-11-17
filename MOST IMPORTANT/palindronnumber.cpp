

#include<iostream>
using namespace std;
int main()
{
    
    int n,remainder,reverse=0,m;
    cout<<"Enter the number=";
    cin>>n;
    m = n;
    while (n>0)
    {
        remainder = n%10;
        reverse = remainder+(reverse*10);
        n = n/10;

    }
    cout<<reverse<<" "<<endl;
    if (m==reverse)
    {
        cout<<"TRUE";
    }
        
    else
    {
        cout<<"false";
    }
    
    
    return 0;
}




