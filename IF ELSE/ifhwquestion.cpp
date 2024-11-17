
//print the area of rectange and perimeter and area of rectange greater than perimeter

#include<iostream>
using namespace std;
int main()
{
    int l , b ,a , p;
    cout<<"Enter the length=";
    cin>>l;
    cout<<"Enter the breath=";
    cin>>b;
    a = l * l;
    cout<<"\narea of rectange="<<a;
    p = 2 * (l + b);
    cout<<"\nrectange of permiter="<<p;
    if(a>p)
    cout<<"\nArea is greater";
    else
    cout<<"\nPerimeter is greater";
    
    
    
}