

//absolute number

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    if(n>=0)
    cout<<"positve same input and output="<<n;
    else
    cout<<"negative input but output positive="<<-n;
    
}*/



//second method


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    if(n<0) n = -n;
    cout<<"absolute value="<<n;
}