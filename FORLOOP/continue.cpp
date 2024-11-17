


/*#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i<=20; i++)
    {
        if (i!= 8 && i!= 12)
        {
            cout<<i<<" ";
        }
        
    }
}
*/




//second method


#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i<=20; i++)
    {
        if (i==8) 
        continue;
        if (i==12)
        continue;
        {
            cout<<i<<" ";
        }
        
    }
}