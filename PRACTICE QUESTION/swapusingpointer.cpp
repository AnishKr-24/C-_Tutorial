//input swap by function.

/*#include<iostream>
using namespace std;
void swap(int& x , int&  y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a , b;
    cout<<"Enter the first number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;

}
*/






//input swap by pointer.
#include<iostream>
using namespace std;
void swap(int* x , int*  y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a , b;
    cout<<"Enter the first number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;

}