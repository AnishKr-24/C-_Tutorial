
/* artmstrong number = examples 
153 = 1*1*1 + 5*5*5 + 3*3*3 =1+125+27=153 ey armstrong hai
123 = 1*1*1* + 2*2*2 + 3*3*3 =1+8+27=36 ey armstrong nhi hai
*/


#include<iostream>
using namespace std;
int main()
{
    int n,remainder,reverse=0,m;
    cout<<"Enter the number=";
    cin>>n;
    m=n;
    while (m>0)
    {
        remainder = m%10;
        reverse =reverse + remainder*remainder*remainder;
        m = m/10;

    }
    cout<<reverse<<" "<<endl;
    if (reverse==n)
    {
        cout<<"true";
    }
    else
    cout<<"false";
    
    
}