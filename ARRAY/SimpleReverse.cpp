
//Using Function.

#include<iostream>
using namespace std;
void Revesenum(int n)
{
    int rev=0,rem;
    while (n>0)
    {
        rem = n % 10;
        rev = rem + rev * 10;
        n = n/10;
    }
    cout<<"Reverse number : "<<rev;
}
int main()
{
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    Revesenum(n);
    return 0;
}





// Without using Function.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     int rev = 0 , rem;
//     while (num>0)
//     {
//         rem = num % 10;
//         rev = rem + rev * 10;
//         num /= 10;
//     }
//     cout<<"Reverse Number : "<<rev<<endl;
//     return 0;
// }