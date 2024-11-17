
// !st method using function.
// #include<iostream>
// using namespace std;

// int comb(int x)
// {
//     int fact = 1;
//     for (int i = 2; i <= x; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main()
// {
//     int n , r;
//     cout<<"Enter The value : ";
//     cin>>n>>r;
//     int y = comb(n);
//     int z = comb(r);
//     int m = comb(n-r);
//     int ncr = y/(z*m);
//     cout<<"Answer : "<<ncr;
//     return 0;
// }



// 2nd Method using Function. Permutation and combination.

#include<iostream>
using namespace std;

int comb(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n , int r)
{
    int ncr = comb(n)/(comb(r)*comb(n-r));
    return ncr;
}
int permutation(int n , int r)
{
    int npr = comb(n)/comb(n-r);
    return npr;
}
int main()
{
    int n , r;
    cout<<"Enter The value : ";
    cin>>n>>r;
    int ncr = combination(n,r);
    cout<<"Answer ncr : "<<ncr<<endl;
    cout<<"Next"<<endl;
    int npr = permutation(n,r);
    cout<<"Answer Npr : "<<npr;
    return 0;
}