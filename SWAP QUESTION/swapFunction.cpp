

//  FUnction mai swap nhi hota 

// #include<iostream>
// using namespace std;
// void swap(int a , int b)  
// {                           
//     int temp = a;
//     a = b;
//     b = temp;;
// }
// int main()
// {
//     int a = 200;
//     int b = 858;
//     cout<<a<<" "<<b<<endl;
//     swap(a , b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }




// Fuction Use kar ke pointer mai swap hota hai.
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
    int a = 200;
    int b = 858;
    cout<<a<<" "<<b<<endl;
    swap(a , b);
    cout<<a<<" "<<b<<endl;
    return 0;
}