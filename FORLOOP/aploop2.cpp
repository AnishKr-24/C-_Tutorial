


//display this ap-4,7,10,13,16------up ton'n'.
// ap loop
//An=a+(n-1)d  formula
//a=4,d=3
//An=4+(n-1)3
//An=3*n+1

/*#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter n =";
    cin>>n;
    for (int i = 4; i<=3*n+1; i+=3)
    {
       cout<<i<<" ";
    }
    
}*/

//second method



#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter n =";
    cin>>n;
    int a =4;
    for (int i = 1; i<=n; i++)
    {
       cout<<a<<" ";
       a=a+3;
    }
    
}