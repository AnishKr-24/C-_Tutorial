

#include<iostream>
using namespace std;
int main(){
    int n,m,rev=0,rem;
    cin>>m;
    n=m;
    while(n>0){
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
    cout<<rev<<" "<<endl;
    if(rev==m){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}