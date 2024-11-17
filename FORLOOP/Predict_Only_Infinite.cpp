
/*

// infinite loop
#include<iostream>
using namespace std;
int main()
{
    while ('a'<'b')
    {
        cout<<"Hello"<<endl;
    }
    
}
*/



/*

// infinite tak
#include<iostream>
using namespace std;
int main()
{
    int i;
    while (i = 10)
    {
        cout<<i<<" ";
        i++;
    }
    
}
*/



/*
//ouput this question.
//3 1
//1 3
//0 4
//-1 5

#include<iostream>
using namespace std;
int main()
{
    int x = 4 , y = 0 , z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y) 
        continue;
        else
        cout<<x<<" "<<y<<endl;
        
    }
    return 0;
}
*/


/*

#include<iostream>
using namespace std;
int main()
{
    int x = 4 , y = 0 , z;
    while (x >= 0)
    {
                                    //o/p=4 0
                                    //    3 1
        if (x == y) 
        break;
        else
            cout<<x<<" "<<y<<endl;
            x--;
            y++;
        
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    int t = 10;
    while (t /= 2)
    {
        cout<<"Hello"<<endl;
    }
    return 0;
}
*/




/*
// gitna digit hai utna batayega.

#include<iostream> 
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int count=0;
    int a=num;
    while (num>0)
    {
        num=num/10;
        count++;
    }
    if (a==0)
    {
        cout<<1;
    }
    else
        cout<<count;
    return 0;
}
*/


/*
// SUM OF DIGIT.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    while (n>0)
    {
        int lastdigit = n%10;
        n = n/10;
        sum = sum+lastdigit;
    }
    cout<<sum;
}

*/



/*

//Reverse Number hai.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int rev=0;
    while (n>0)
    {
        //rev = rev * 10;    // dono same hai.
        int lastdigit = n%10;
        rev = lastdigit + rev * 10;
        n = n/10;
    }
    cout<<rev;
}
*/


/*

// odd bala add ho raha hai or even bala subtract.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum =  sum + i;
        else
            sum = sum - i;
    }
    cout<<sum;
}
*/


#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    cout<<"Answer : "<<product;
    return 0;
}