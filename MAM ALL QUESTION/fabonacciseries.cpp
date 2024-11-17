


/*  // ismai jitna input dalenge utna tak answer print krega.ex = 8 = 0 1 1 2 3 5 8 
#include<iostream>
using namespace std;
int main()
{
    int num , x , y , z ;
    cout<<"Enter the number=";
    cin>>num;
    x = 0;
    y = 1;
    z = 0;
    while ( <= num)
    {
        cout<<z<<" ";
        x = y;
        y = z;
        z = x + y;
    }
    
    return 0;
}

*/


// ismai jitna input lenge utna ka fibonacci nikal ke dega  ex = 8 = 0 1 1 2 3 5 8 13 21.
#include<iostream>
using namespace std;
int main()
{
    int num , x , y , z ;
    int count = 1;
    cout<<"Enter the number=";
    cin>>num;
    x = 0;
    y = 1;
    z = 0;
    while (count<= num)
    {
        cout<<z<<" ";
        x = y;
        y = z;
        z = x + y;
        count ++;
    }
    
    return 0;
}