

//odd check loop 



/*#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=100; i++)
    {
        if(i%2!=0)
        cout<<i<<"  ";
    }
    
}
*/



// 2nd metod

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=100; i=i+2)
    {
        if(i%2!=0)
        cout<<i<<"  ";
    }
    
}

