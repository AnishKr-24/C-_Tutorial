

// // min and max using predefine.
// #include<iostream>
// using namespace std;
// int sum(int x , int y)
// {
//     return x+y;
// }
// int main()
// {
//     //cout<<sum(3,4)<<endl;
//     cout<<max(31,4)<<endl;
//     cout<<min(20,7)<<endl;
//     return 0;
// }



// it is important method.
#include<iostream>
#include<cmath>
using namespace std;
int maxm(int x , int y)
{
    int a;
    if (x<y) 
    {
        a = x;
    }
    else
        a = y;
        return a;
}
int main()
{
    // int x , y;
    // cout<<"Enter the number : ";
    // cin>>x>>y;
    // cout<<"max : "<<max(x , y)<<endl;
    // cout<<"mini : "<<min(x , y)<<endl;
    cout<<"Squart : "<<sqrt(64);
    return 0;
}
