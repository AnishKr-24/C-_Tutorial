

/*#include<iostream>
using namespace std;
int main()
{
    int x = 10 , y = 20;
    if (x==10)
    {
        cout<<x<<endl;
    }
    else ;
        cout<<y;
    
#include <iostream>
using namespace std;

int main() {
    float num, m;
    cin >> num;

    if (num > 100000) {
        m = num * 0.15;
    }
    else if (num >= 50000 && num <= 100000) {
        m = num * 0.10;
    }
    else if (num < 50000) {
        m = num * 0.05;
    }

    cout << m;
    return 0;
}*/

/*
 table .
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of table=";
    cin>>n;
    int table;
    for (int  i = 1; i <= 10; i++)
    {
        table = n * i;
        cout<<table<<endl;
    }
    return 0;
}
*/

/*
even check.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of table=";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            cout<<"Even="<<i<<","<<" ";
        }
    }
    return 0;
}
*/


/*
Odd check.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of table=";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            cout<<"odd="<<i<<","<<" ";
        }
    }
    return 0;
}
*/

/*
table.
#include<iostream>
using namespace std;
int main()
{
    for (int i = 19; i <= 190; i=i+19)
    {
        cout<<i<<endl;
    }
    return 0;
}
*/

/*
table
#include<iostream>
using namespace std;
int main()
{
    for (int i = 4; i <= 40; i+=4)
    {
        cout<<i<<endl;
    }
    return 0;
}

*/

/*
Ap = 2*number-1.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    for (int i = 1; i <=2*num-1; i+=3)
    {
        cout<<i<<" ";
    }
    return 0;
}
*/


/*
//Ap = 2 , 5 , 8 , 11 , 14;  Ap = 3 * n - 1
#include<iostream>
using namespace std; 
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    for (int i = 3; i <= 3*num -1; i+=3)
    {
        cout<<i<<" ";
    }
    
}

*/
/*
//Ap = 2 , 5 , 8 , 11 , 14;  Ap = 3 * n - 1
//second method hai a = second value rkh ke
#include<iostream>
using namespace std; 
int main()
{
    int num;
    int a = 4;
    cout<<"Enter the number=";
    cin>>num;
    for (int i = 1; i <= 3*num -1; i+=3)
    {
        cout<<a<<" ";
        a = a+3;
    }
    
}
*/


/*
Gp=4 , 12 , 36 , 108
#include<iostream>
using namespace std; 
int main()
{
    int num;
    int a = 4;
    cout<<"Enter the number=";
    cin>>num;
    for (int i = 3; i <= 3*num -1; i+=3)
    {
        cout<<a<<" ";
        a = a*3;
    }
    
}
*/

/*
//Gp = 2,4,8,16,32,64   Second method.
#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i = 2; i < 2*n; i=i*2)
    {
        cout<<i<<" ";
    }
    
}

*/