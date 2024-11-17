

//input table

/*#include<iostream>
using namespace std;
int main()
{ 
    int a,table;
    cout<<"enter the table =";
    cin>>a;
    for (int i = 1; i <=10; i++)
    {
        cout<<a<<" * "<<i<<" = "<<a * i<<endl;
    }
    
}
*/


//second method




#include<iostream>
using namespace std;
int main()
{ 
    int a,table;
    cout<<"enter the table =";
    cin>>a;
    for (int i = 1; i <=10; i++)
    {
       table=i*a;
       cout<<table<<endl;
    }
    
}