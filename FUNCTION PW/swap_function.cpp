

// using third variable.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a  , b;
//     cout<<"Enter the number : \n";
//     cin>>a>>b;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b<<endl;
// }


// using Arthmetic Operator.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a  , b;
//     cout<<"Enter the number : \n";
//     cin>>a>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<a<<" "<<b<<endl;
// }


// Using Bitwise Operator.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a  , b;
//     cout<<"Enter the number : \n";
//     cin>>a>>b;
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     cout<<a<<" "<<b<<endl;
// }




// Swap function se nhi hota hai. kyuki pass by value hota hai . isliye input or output same rhta hai.
// #include<iostream>
// using namespace std;
// void swap(int a , int b)  // void swap(int &a , int &b) ismai Address laga de to swap krega.
// {
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     return;
// }
// int main()
// {
//     int x  , y;
//     cout<<"Enter the number : \n";
//     cin>>x>>y;
//     swap(x , y);
//     cout<<x<<" "<<y<<endl;
// }




//using address operator.
#include<iostream>
using namespace std;
void swap(int &a , int &b)  // & isi ko bolte hai pass of refernce 
{                           //-likin ey sirf c++ mi use hota c mai nhi
    int temp = a;
    a = b;
    b = temp;;
}
int main()
{
    int a , b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swap(a , b);
    cout<<a<<" "<<b<<endl;
    return 0;
}