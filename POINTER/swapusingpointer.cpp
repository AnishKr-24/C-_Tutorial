


#include<iostream>
using namespace std;
void swap(int* a , int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a , b;
    cout<<"Enter the number=";
    cin>>a;
    cout<<"Enter the number=";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a , b);
    cout<<a<<" "<<b<<endl;
    return 0;
}