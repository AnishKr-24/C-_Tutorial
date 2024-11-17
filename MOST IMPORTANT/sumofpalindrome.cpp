

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
    if (reverse>0)
    {
        int sum = 0;
        while (reverse>0)
        {
            
            sum = sum + reverse % 10;
            reverse = reverse/10;
        }
        cout<<"Sum of Pallindrom = "<<sum;
    }
    
    
    return 0;
}




