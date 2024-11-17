

#include<iostream>
using namespace std;
void hanoi(int n , char S , char H , char D)  // S=start , H= helper , D=destination.
{
    if(n==0) return;
    hanoi(n-1 , S , D , H);
    cout<<S<<"->"<<D<<endl;
    hanoi(n-1,H,S,D);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    hanoi(n,'A','B','C');
}