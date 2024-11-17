
/* strong number= examples
6 = factor of 6 = 1 , 2 , 3 or 6 ko nhi lena hai 
factor ko add karna hai
1+2+3=6 ey strong number hai
8 = 1+2+4=7 ey strong number nhi hai
*/




#include<iostream>
using namespace  std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number=";
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        if ((n%i==0))
        {
            sum = sum+i;
        }
        if (sum ==n)
        {
            cout<<"True";
        }
        else
        cout<<"false";
        return 0;
        
        
    }
    
}